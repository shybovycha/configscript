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
    | STRING { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $STRING.text; }
    | objectValue { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = antlrcpp::downCast<PropertyValueContext*>(_localctx)->objectValue(); }
    ;

objectValue
    returns [
        std::string classifier,
        std::map<std::string, std::any> properties
    ]
    : '{' property* '}'
    | STRING '{' (property)* '}' { $classifier = $STRING.text; }
    ;

intVector
    returns [ std::vector<int> elements ]
    : INT+ { auto v = $ctx->INT(); std::for_each(v.begin(), v.end(), [&](auto* node) { _localctx->elements.push_back(std::stoi(node->getText())); }); }
    ;

floatVector
    returns [ std::vector<float> elements ]
    : FLOAT+ { auto v = $ctx->FLOAT(); std::for_each(v.begin(), v.end(), [&](auto* node) { _localctx->elements.push_back(std::stof(node->getText())); }); }
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
