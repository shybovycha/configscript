grammar ConfigScript;

@header {
    #include <variant>
    #include <any>
}

config : objects=object* EOF ;

object
    returns [
        std::string name
    ]
    : Identifier objectValue { $name = $Identifier->getText(); }
    ;

property
    returns [
        std::string name,
        std::any value
    ]
    : Identifier propertyValue { $name = $Identifier->getText(); antlrcpp::downCast<ObjectValueContext*>(_localctx->parent)->propertyMap[$name] = $value; }
    ;

propertyValue
    : intVector { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $intVector.elements; }
    | floatVector { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $floatVector.elements; }
    | INT { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = std::stoi($INT.text); }
    | FLOAT { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = std::stof($FLOAT.text); }
    | BOOL { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = static_cast<bool>($BOOL.text == "true"); }
    | STRING { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $STRING.text; }
    | objectValue { antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = $objectValue.propertyMap; }
    ;

objectValue
    returns [
        std::string classifier,
        std::map<std::string, std::any> propertyMap
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

STRING : DOUBLE_QUOTED_STRING | SINGLE_QUOTED_STRING ;

BOOL : 'true' | 'false' ;

DOUBLE_QUOTED_STRING : '"' DoubleQuoteStringChar* '"' ;
SINGLE_QUOTED_STRING : '\'' SingleQuoteStringChar* '\'' ;

Identifier : ALPHA (ALPHA | NUM)* ;

fragment SingleQuoteStringChar : ~['\r\n] ;
    // : ~['\\\r\n]
    // | SimpleEscapeSequence ;

fragment DoubleQuoteStringChar : ~["\r\n] ;
    // : ~["\\\r\n]
    // | SimpleEscapeSequence ;

// fragment SimpleEscapeSequence : '\\' ['"?abfnrtv\\] ;

INT : '0'
    | '-'? [1-9] [0-9]*
    ;

FLOAT : ('+' | '-')? NUM+ '.' NUM+ ;

WHITESPACE : [ \r\n\t]+ -> skip ;
ALPHA : [a-zA-Z_] ;
NUM : [0-9] ;

LINE_COMMENT : '//' ~[\r\n]* -> skip ;
BLOCK_COMMENT : '/*' .*? '*/' -> skip ;
