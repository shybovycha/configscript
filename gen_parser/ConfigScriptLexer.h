
    #include <variant>
    #include <any>


// Generated from .\ConfigScript.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  ConfigScriptLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, STRING = 3, BOOL = 4, DOUBLE_QUOTED_STRING = 5, 
    SINGLE_QUOTED_STRING = 6, Identifier = 7, INT = 8, FLOAT = 9, WHITESPACE = 10, 
    ALPHA = 11, NUM = 12, LINE_COMMENT = 13, BLOCK_COMMENT = 14
  };

  explicit ConfigScriptLexer(antlr4::CharStream *input);

  ~ConfigScriptLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

