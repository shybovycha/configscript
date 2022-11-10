
    #include <variant>
    #include <any>


// Generated from .\ConfigScript.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  ConfigScriptParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, STRING = 3, BOOL = 4, DOUBLE_QUOTED_STRING = 5, 
    SINGLE_QUOTED_STRING = 6, Identifier = 7, INT = 8, FLOAT = 9, WHITESPACE = 10, 
    ALPHA = 11, NUM = 12, LINE_COMMENT = 13, BLOCK_COMMENT = 14
  };

  enum {
    RuleConfig = 0, RuleObject = 1, RuleProperty = 2, RulePropertyValue = 3, 
    RuleObjectValue = 4, RuleIntVector = 5, RuleFloatVector = 6, RuleComment = 7
  };

  explicit ConfigScriptParser(antlr4::TokenStream *input);

  ConfigScriptParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ConfigScriptParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ConfigContext;
  class ObjectContext;
  class PropertyContext;
  class PropertyValueContext;
  class ObjectValueContext;
  class IntVectorContext;
  class FloatVectorContext;
  class CommentContext; 

  class  ConfigContext : public antlr4::ParserRuleContext {
  public:
    ConfigScriptParser::ObjectContext *objects = nullptr;
    ConfigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConfigContext* config();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    std::string name;
    antlr4::Token *identifierToken = nullptr;
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ObjectValueContext *objectValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectContext* object();

  class  PropertyContext : public antlr4::ParserRuleContext {
  public:
    std::string name;
    std::any value;
    antlr4::Token *identifierToken = nullptr;
    PropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    PropertyValueContext *propertyValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyContext* property();

  class  PropertyValueContext : public antlr4::ParserRuleContext {
  public:
    ConfigScriptParser::IntVectorContext *intVectorContext = nullptr;
    ConfigScriptParser::FloatVectorContext *floatVectorContext = nullptr;
    antlr4::Token *intToken = nullptr;
    antlr4::Token *floatToken = nullptr;
    antlr4::Token *boolToken = nullptr;
    antlr4::Token *stringToken = nullptr;
    ConfigScriptParser::ObjectValueContext *objectValueContext = nullptr;
    PropertyValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntVectorContext *intVector();
    FloatVectorContext *floatVector();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *STRING();
    ObjectValueContext *objectValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyValueContext* propertyValue();

  class  ObjectValueContext : public antlr4::ParserRuleContext {
  public:
    std::string classifier;
    std::map<std::string, std::any> propertyMap;
    antlr4::Token *stringToken = nullptr;
    ObjectValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PropertyContext *> property();
    PropertyContext* property(size_t i);
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectValueContext* objectValue();

  class  IntVectorContext : public antlr4::ParserRuleContext {
  public:
    std::vector<int> elements;
    IntVectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntVectorContext* intVector();

  class  FloatVectorContext : public antlr4::ParserRuleContext {
  public:
    std::vector<float> elements;
    FloatVectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FLOAT();
    antlr4::tree::TerminalNode* FLOAT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FloatVectorContext* floatVector();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_COMMENT();
    antlr4::tree::TerminalNode *BLOCK_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommentContext* comment();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

