
    #include <variant>
    #include <any>


// Generated from .\ConfigScript.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ConfigScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ConfigScriptParser.
 */
class  ConfigScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterConfig(ConfigScriptParser::ConfigContext *ctx) = 0;
  virtual void exitConfig(ConfigScriptParser::ConfigContext *ctx) = 0;

  virtual void enterTopLevelObject(ConfigScriptParser::TopLevelObjectContext *ctx) = 0;
  virtual void exitTopLevelObject(ConfigScriptParser::TopLevelObjectContext *ctx) = 0;

  virtual void enterProperty(ConfigScriptParser::PropertyContext *ctx) = 0;
  virtual void exitProperty(ConfigScriptParser::PropertyContext *ctx) = 0;

  virtual void enterPropertyValue(ConfigScriptParser::PropertyValueContext *ctx) = 0;
  virtual void exitPropertyValue(ConfigScriptParser::PropertyValueContext *ctx) = 0;

  virtual void enterObjectValue(ConfigScriptParser::ObjectValueContext *ctx) = 0;
  virtual void exitObjectValue(ConfigScriptParser::ObjectValueContext *ctx) = 0;

  virtual void enterIntVector(ConfigScriptParser::IntVectorContext *ctx) = 0;
  virtual void exitIntVector(ConfigScriptParser::IntVectorContext *ctx) = 0;

  virtual void enterFloatVector(ConfigScriptParser::FloatVectorContext *ctx) = 0;
  virtual void exitFloatVector(ConfigScriptParser::FloatVectorContext *ctx) = 0;

  virtual void enterComment(ConfigScriptParser::CommentContext *ctx) = 0;
  virtual void exitComment(ConfigScriptParser::CommentContext *ctx) = 0;


};

