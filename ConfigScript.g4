grammar ConfigScript;

@header {
    #include <variant>
    #include <any>
}

config : objects=topLevelObject* EOF ;

topLevelObject
    returns [
        std::string name
    ]
    : Identifier value=objectValue { $name = $Identifier->getText(); }
    ;

property
    returns [
        std::string name,
        std::any value
    ]
    : Identifier propertyValue { $name = $Identifier->getText(); antlrcpp::downCast<ObjectValueContext*>(_localctx->parent)->properties[$name] = $value; }
    ;

propertyValue
    : intVector { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $intVector.elements; }
    | floatVector { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $floatVector.elements; }
    | INT { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = std::stoi($INT.text); }
    | FLOAT { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = std::stof($FLOAT.text); }
    | BOOL { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = static_cast<bool>($BOOL.text == "true"); }
    | STRING { std::string s1 = $STRING.text; std::string_view s = s1; if (!s.empty() && s.front() == '"' && s.back() == '"') { s.remove_prefix(1); s.remove_suffix(1); } antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = std::string(s); }
    | objectValue { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = antlrcpp::downCast<PropertyValueContext*>(_localctx)->objectValue(); $objectValue.name = antlrcpp::downCast<PropertyContext*>(_localctx->parent)->identifierToken->getText(); }
    | stringList { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $stringList.elements; }
    ;

objectValue
    returns [
        std::string name,
        std::string classifier,
        std::map<std::string, std::any> properties
    ]
    : '{' property* '}'
    | STRING '{' (property)* '}' { std::string s1 = $STRING.text; std::string_view s = s1; if (!s.empty() && s.front() == '"' && s.back() == '"') { s.remove_prefix(1); s.remove_suffix(1); } $classifier = std::string(s); }
    ;

intVector
    returns [ std::vector<int> elements ]
    : INT+ { auto v = $ctx->INT(); std::for_each(v.begin(), v.end(), [&](auto* node) { _localctx->elements.push_back(std::stoi(node->getText())); }); }
    ;

floatVector
    returns [ std::vector<float> elements ]
    : FLOAT+ { auto v = $ctx->FLOAT(); std::for_each(v.begin(), v.end(), [&](auto* node) { _localctx->elements.push_back(std::stof(node->getText())); }); }
    ;

stringList
    returns [ std::vector<std::string> elements ]
    : '[' STRING+ ']' { auto v = $ctx->STRING(); std::for_each(v.begin(), v.end(), [&](auto* node) { std::string s1 = node->getText(); std::string_view s = s1; if (!s.empty() && s.front() == '"' && s.back() == '"') { s.remove_prefix(1); s.remove_suffix(1); } _localctx->elements.push_back(std::string(s)); }); }
    ;

comment : LINE_COMMENT | BLOCK_COMMENT ;

STRING : '"' (STRING_TEXT | EOL)* '"' ;

BOOL : 'true' | 'false' ;

Identifier : ALPHA (ALPHA | NUM)* ;

INT : '0'
    | '-'? [1-9] [0-9]*
    ;

FLOAT : ('+' | '-')? NUM+ '.' NUM+ ;

// fragments are rules that are inlined, so unlike tokens (WHITESPACE, ALPHA, NUM, etc.) these are not included in match results
// without these, the input would be tokenized as STRING_TEXT and not as Identifier, for instance
fragment STRING_TEXT : ( ~["\r\n\\] | ESCAPE_SEQUENCE )+ ;

fragment ESCAPE_SEQUENCE : '\\' ( [btf"\\] | EOF ) ;

fragment EOL : '\r'? '\n' ;

WHITESPACE : [ \r\n\t]+ -> skip ;
ALPHA : [a-zA-Z_] ;
NUM : [0-9] ;

LINE_COMMENT : '//' ~[\r\n]* -> skip ;
BLOCK_COMMENT : '/*' .*? '*/' -> skip ;
