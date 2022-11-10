
    #include <variant>
    #include <any>


// Generated from .\ConfigScript.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ConfigScriptListener.h"


/**
 * This class provides an empty implementation of ConfigScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ConfigScriptBaseListener : public ConfigScriptListener {
public:

  virtual void enterConfig(ConfigScriptParser::ConfigContext * /*ctx*/) override { }
  virtual void exitConfig(ConfigScriptParser::ConfigContext * /*ctx*/) override { }

  virtual void enterObject(ConfigScriptParser::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(ConfigScriptParser::ObjectContext * /*ctx*/) override { }

  virtual void enterProperty(ConfigScriptParser::PropertyContext * /*ctx*/) override { }
  virtual void exitProperty(ConfigScriptParser::PropertyContext * /*ctx*/) override { }

  virtual void enterPropertyValue(ConfigScriptParser::PropertyValueContext * /*ctx*/) override { }
  virtual void exitPropertyValue(ConfigScriptParser::PropertyValueContext * /*ctx*/) override { }

  virtual void enterObjectValue(ConfigScriptParser::ObjectValueContext * /*ctx*/) override { }
  virtual void exitObjectValue(ConfigScriptParser::ObjectValueContext * /*ctx*/) override { }

  virtual void enterIntVector(ConfigScriptParser::IntVectorContext * /*ctx*/) override { }
  virtual void exitIntVector(ConfigScriptParser::IntVectorContext * /*ctx*/) override { }

  virtual void enterFloatVector(ConfigScriptParser::FloatVectorContext * /*ctx*/) override { }
  virtual void exitFloatVector(ConfigScriptParser::FloatVectorContext * /*ctx*/) override { }

  virtual void enterComment(ConfigScriptParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(ConfigScriptParser::CommentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

