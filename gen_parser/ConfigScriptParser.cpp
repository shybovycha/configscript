
    #include <variant>
    #include <any>


// Generated from .\ConfigScript.g4 by ANTLR 4.13.0


#include "ConfigScriptListener.h"

#include "ConfigScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ConfigScriptParserStaticData final {
  ConfigScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ConfigScriptParserStaticData(const ConfigScriptParserStaticData&) = delete;
  ConfigScriptParserStaticData(ConfigScriptParserStaticData&&) = delete;
  ConfigScriptParserStaticData& operator=(const ConfigScriptParserStaticData&) = delete;
  ConfigScriptParserStaticData& operator=(ConfigScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag configscriptParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ConfigScriptParserStaticData *configscriptParserStaticData = nullptr;

void configscriptParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (configscriptParserStaticData != nullptr) {
    return;
  }
#else
  assert(configscriptParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ConfigScriptParserStaticData>(
    std::vector<std::string>{
      "config", "topLevelObject", "property", "propertyValue", "objectValue", 
      "intVector", "floatVector", "comment"
    },
    std::vector<std::string>{
      "", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "STRING", "BOOL", "DOUBLE_QUOTED_STRING", "SINGLE_QUOTED_STRING", 
      "Identifier", "INT", "FLOAT", "WHITESPACE", "ALPHA", "NUM", "LINE_COMMENT", 
      "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,88,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,5,0,18,8,0,10,0,12,0,21,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,
  	2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,3,3,50,8,3,1,4,1,4,5,4,54,8,4,10,4,12,4,57,9,4,1,4,1,4,1,4,1,4,5,
  	4,63,8,4,10,4,12,4,66,9,4,1,4,1,4,3,4,70,8,4,1,5,4,5,73,8,5,11,5,12,5,
  	74,1,5,1,5,1,6,4,6,80,8,6,11,6,12,6,81,1,6,1,6,1,7,1,7,1,7,0,0,8,0,2,
  	4,6,8,10,12,14,0,1,1,0,13,14,91,0,19,1,0,0,0,2,24,1,0,0,0,4,28,1,0,0,
  	0,6,49,1,0,0,0,8,69,1,0,0,0,10,72,1,0,0,0,12,79,1,0,0,0,14,85,1,0,0,0,
  	16,18,3,2,1,0,17,16,1,0,0,0,18,21,1,0,0,0,19,17,1,0,0,0,19,20,1,0,0,0,
  	20,22,1,0,0,0,21,19,1,0,0,0,22,23,5,0,0,1,23,1,1,0,0,0,24,25,5,7,0,0,
  	25,26,3,8,4,0,26,27,6,1,-1,0,27,3,1,0,0,0,28,29,5,7,0,0,29,30,3,6,3,0,
  	30,31,6,2,-1,0,31,5,1,0,0,0,32,33,3,10,5,0,33,34,6,3,-1,0,34,50,1,0,0,
  	0,35,36,3,12,6,0,36,37,6,3,-1,0,37,50,1,0,0,0,38,39,5,8,0,0,39,50,6,3,
  	-1,0,40,41,5,9,0,0,41,50,6,3,-1,0,42,43,5,4,0,0,43,50,6,3,-1,0,44,45,
  	5,3,0,0,45,50,6,3,-1,0,46,47,3,8,4,0,47,48,6,3,-1,0,48,50,1,0,0,0,49,
  	32,1,0,0,0,49,35,1,0,0,0,49,38,1,0,0,0,49,40,1,0,0,0,49,42,1,0,0,0,49,
  	44,1,0,0,0,49,46,1,0,0,0,50,7,1,0,0,0,51,55,5,1,0,0,52,54,3,4,2,0,53,
  	52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,58,1,0,0,0,57,
  	55,1,0,0,0,58,70,5,2,0,0,59,60,5,3,0,0,60,64,5,1,0,0,61,63,3,4,2,0,62,
  	61,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,1,0,0,0,65,67,1,0,0,0,66,
  	64,1,0,0,0,67,68,5,2,0,0,68,70,6,4,-1,0,69,51,1,0,0,0,69,59,1,0,0,0,70,
  	9,1,0,0,0,71,73,5,8,0,0,72,71,1,0,0,0,73,74,1,0,0,0,74,72,1,0,0,0,74,
  	75,1,0,0,0,75,76,1,0,0,0,76,77,6,5,-1,0,77,11,1,0,0,0,78,80,5,9,0,0,79,
  	78,1,0,0,0,80,81,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,83,1,0,0,0,83,
  	84,6,6,-1,0,84,13,1,0,0,0,85,86,7,0,0,0,86,15,1,0,0,0,7,19,49,55,64,69,
  	74,81
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  configscriptParserStaticData = staticData.release();
}

}

ConfigScriptParser::ConfigScriptParser(TokenStream *input) : ConfigScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ConfigScriptParser::ConfigScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ConfigScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *configscriptParserStaticData->atn, configscriptParserStaticData->decisionToDFA, configscriptParserStaticData->sharedContextCache, options);
}

ConfigScriptParser::~ConfigScriptParser() {
  delete _interpreter;
}

const atn::ATN& ConfigScriptParser::getATN() const {
  return *configscriptParserStaticData->atn;
}

std::string ConfigScriptParser::getGrammarFileName() const {
  return "ConfigScript.g4";
}

const std::vector<std::string>& ConfigScriptParser::getRuleNames() const {
  return configscriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& ConfigScriptParser::getVocabulary() const {
  return configscriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ConfigScriptParser::getSerializedATN() const {
  return configscriptParserStaticData->serializedATN;
}


//----------------- ConfigContext ------------------------------------------------------------------

ConfigScriptParser::ConfigContext::ConfigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConfigScriptParser::ConfigContext::EOF() {
  return getToken(ConfigScriptParser::EOF, 0);
}

std::vector<ConfigScriptParser::TopLevelObjectContext *> ConfigScriptParser::ConfigContext::topLevelObject() {
  return getRuleContexts<ConfigScriptParser::TopLevelObjectContext>();
}

ConfigScriptParser::TopLevelObjectContext* ConfigScriptParser::ConfigContext::topLevelObject(size_t i) {
  return getRuleContext<ConfigScriptParser::TopLevelObjectContext>(i);
}


size_t ConfigScriptParser::ConfigContext::getRuleIndex() const {
  return ConfigScriptParser::RuleConfig;
}

void ConfigScriptParser::ConfigContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConfig(this);
}

void ConfigScriptParser::ConfigContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConfig(this);
}

ConfigScriptParser::ConfigContext* ConfigScriptParser::config() {
  ConfigContext *_localctx = _tracker.createInstance<ConfigContext>(_ctx, getState());
  enterRule(_localctx, 0, ConfigScriptParser::RuleConfig);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ConfigScriptParser::Identifier) {
      setState(16);
      antlrcpp::downCast<ConfigContext *>(_localctx)->objects = topLevelObject();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(22);
    match(ConfigScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelObjectContext ------------------------------------------------------------------

ConfigScriptParser::TopLevelObjectContext::TopLevelObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConfigScriptParser::TopLevelObjectContext::Identifier() {
  return getToken(ConfigScriptParser::Identifier, 0);
}

ConfigScriptParser::ObjectValueContext* ConfigScriptParser::TopLevelObjectContext::objectValue() {
  return getRuleContext<ConfigScriptParser::ObjectValueContext>(0);
}


size_t ConfigScriptParser::TopLevelObjectContext::getRuleIndex() const {
  return ConfigScriptParser::RuleTopLevelObject;
}

void ConfigScriptParser::TopLevelObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelObject(this);
}

void ConfigScriptParser::TopLevelObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelObject(this);
}

ConfigScriptParser::TopLevelObjectContext* ConfigScriptParser::topLevelObject() {
  TopLevelObjectContext *_localctx = _tracker.createInstance<TopLevelObjectContext>(_ctx, getState());
  enterRule(_localctx, 2, ConfigScriptParser::RuleTopLevelObject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    antlrcpp::downCast<TopLevelObjectContext *>(_localctx)->identifierToken = match(ConfigScriptParser::Identifier);
    setState(25);
    antlrcpp::downCast<TopLevelObjectContext *>(_localctx)->value = objectValue();
     antlrcpp::downCast<TopLevelObjectContext *>(_localctx)->name =  antlrcpp::downCast<TopLevelObjectContext *>(_localctx)->identifierToken->getText(); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyContext ------------------------------------------------------------------

ConfigScriptParser::PropertyContext::PropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConfigScriptParser::PropertyContext::Identifier() {
  return getToken(ConfigScriptParser::Identifier, 0);
}

ConfigScriptParser::PropertyValueContext* ConfigScriptParser::PropertyContext::propertyValue() {
  return getRuleContext<ConfigScriptParser::PropertyValueContext>(0);
}


size_t ConfigScriptParser::PropertyContext::getRuleIndex() const {
  return ConfigScriptParser::RuleProperty;
}

void ConfigScriptParser::PropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProperty(this);
}

void ConfigScriptParser::PropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProperty(this);
}

ConfigScriptParser::PropertyContext* ConfigScriptParser::property() {
  PropertyContext *_localctx = _tracker.createInstance<PropertyContext>(_ctx, getState());
  enterRule(_localctx, 4, ConfigScriptParser::RuleProperty);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    antlrcpp::downCast<PropertyContext *>(_localctx)->identifierToken = match(ConfigScriptParser::Identifier);
    setState(29);
    propertyValue();
     antlrcpp::downCast<PropertyContext *>(_localctx)->name =  antlrcpp::downCast<PropertyContext *>(_localctx)->identifierToken->getText(); antlrcpp::downCast<ObjectValueContext*>(_localctx->parent)->properties[_localctx->name] = _localctx->value; 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyValueContext ------------------------------------------------------------------

ConfigScriptParser::PropertyValueContext::PropertyValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConfigScriptParser::IntVectorContext* ConfigScriptParser::PropertyValueContext::intVector() {
  return getRuleContext<ConfigScriptParser::IntVectorContext>(0);
}

ConfigScriptParser::FloatVectorContext* ConfigScriptParser::PropertyValueContext::floatVector() {
  return getRuleContext<ConfigScriptParser::FloatVectorContext>(0);
}

tree::TerminalNode* ConfigScriptParser::PropertyValueContext::INT() {
  return getToken(ConfigScriptParser::INT, 0);
}

tree::TerminalNode* ConfigScriptParser::PropertyValueContext::FLOAT() {
  return getToken(ConfigScriptParser::FLOAT, 0);
}

tree::TerminalNode* ConfigScriptParser::PropertyValueContext::BOOL() {
  return getToken(ConfigScriptParser::BOOL, 0);
}

tree::TerminalNode* ConfigScriptParser::PropertyValueContext::STRING() {
  return getToken(ConfigScriptParser::STRING, 0);
}

ConfigScriptParser::ObjectValueContext* ConfigScriptParser::PropertyValueContext::objectValue() {
  return getRuleContext<ConfigScriptParser::ObjectValueContext>(0);
}


size_t ConfigScriptParser::PropertyValueContext::getRuleIndex() const {
  return ConfigScriptParser::RulePropertyValue;
}

void ConfigScriptParser::PropertyValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyValue(this);
}

void ConfigScriptParser::PropertyValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyValue(this);
}

ConfigScriptParser::PropertyValueContext* ConfigScriptParser::propertyValue() {
  PropertyValueContext *_localctx = _tracker.createInstance<PropertyValueContext>(_ctx, getState());
  enterRule(_localctx, 6, ConfigScriptParser::RulePropertyValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      antlrcpp::downCast<PropertyValueContext *>(_localctx)->intVectorContext = intVector();
       antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = antlrcpp::downCast<PropertyValueContext *>(_localctx)->intVectorContext->elements; 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(35);
      antlrcpp::downCast<PropertyValueContext *>(_localctx)->floatVectorContext = floatVector();
       antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = antlrcpp::downCast<PropertyValueContext *>(_localctx)->floatVectorContext->elements; 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(38);
      antlrcpp::downCast<PropertyValueContext *>(_localctx)->intToken = match(ConfigScriptParser::INT);
       antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = std::stoi((antlrcpp::downCast<PropertyValueContext *>(_localctx)->intToken != nullptr ? antlrcpp::downCast<PropertyValueContext *>(_localctx)->intToken->getText() : "")); 
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(40);
      antlrcpp::downCast<PropertyValueContext *>(_localctx)->floatToken = match(ConfigScriptParser::FLOAT);
       antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = std::stof((antlrcpp::downCast<PropertyValueContext *>(_localctx)->floatToken != nullptr ? antlrcpp::downCast<PropertyValueContext *>(_localctx)->floatToken->getText() : "")); 
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(42);
      antlrcpp::downCast<PropertyValueContext *>(_localctx)->boolToken = match(ConfigScriptParser::BOOL);
       antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = static_cast<bool>((antlrcpp::downCast<PropertyValueContext *>(_localctx)->boolToken != nullptr ? antlrcpp::downCast<PropertyValueContext *>(_localctx)->boolToken->getText() : "") == "true"); 
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(44);
      antlrcpp::downCast<PropertyValueContext *>(_localctx)->stringToken = match(ConfigScriptParser::STRING);
       antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = (antlrcpp::downCast<PropertyValueContext *>(_localctx)->stringToken != nullptr ? antlrcpp::downCast<PropertyValueContext *>(_localctx)->stringToken->getText() : ""); 
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(46);
      objectValue();
       antlrcpp::downCast<PropertyContext*>(_localctx->parent)->value = antlrcpp::downCast<PropertyValueContext*>(_localctx)->objectValue(); 
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectValueContext ------------------------------------------------------------------

ConfigScriptParser::ObjectValueContext::ObjectValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ConfigScriptParser::PropertyContext *> ConfigScriptParser::ObjectValueContext::property() {
  return getRuleContexts<ConfigScriptParser::PropertyContext>();
}

ConfigScriptParser::PropertyContext* ConfigScriptParser::ObjectValueContext::property(size_t i) {
  return getRuleContext<ConfigScriptParser::PropertyContext>(i);
}

tree::TerminalNode* ConfigScriptParser::ObjectValueContext::STRING() {
  return getToken(ConfigScriptParser::STRING, 0);
}


size_t ConfigScriptParser::ObjectValueContext::getRuleIndex() const {
  return ConfigScriptParser::RuleObjectValue;
}

void ConfigScriptParser::ObjectValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectValue(this);
}

void ConfigScriptParser::ObjectValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectValue(this);
}

ConfigScriptParser::ObjectValueContext* ConfigScriptParser::objectValue() {
  ObjectValueContext *_localctx = _tracker.createInstance<ObjectValueContext>(_ctx, getState());
  enterRule(_localctx, 8, ConfigScriptParser::RuleObjectValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ConfigScriptParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(51);
        match(ConfigScriptParser::T__0);
        setState(55);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ConfigScriptParser::Identifier) {
          setState(52);
          property();
          setState(57);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(58);
        match(ConfigScriptParser::T__1);
        break;
      }

      case ConfigScriptParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(59);
        antlrcpp::downCast<ObjectValueContext *>(_localctx)->stringToken = match(ConfigScriptParser::STRING);
        setState(60);
        match(ConfigScriptParser::T__0);
        setState(64);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ConfigScriptParser::Identifier) {
          setState(61);
          property();
          setState(66);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(67);
        match(ConfigScriptParser::T__1);
         antlrcpp::downCast<ObjectValueContext *>(_localctx)->classifier =  (antlrcpp::downCast<ObjectValueContext *>(_localctx)->stringToken != nullptr ? antlrcpp::downCast<ObjectValueContext *>(_localctx)->stringToken->getText() : ""); 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntVectorContext ------------------------------------------------------------------

ConfigScriptParser::IntVectorContext::IntVectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ConfigScriptParser::IntVectorContext::INT() {
  return getTokens(ConfigScriptParser::INT);
}

tree::TerminalNode* ConfigScriptParser::IntVectorContext::INT(size_t i) {
  return getToken(ConfigScriptParser::INT, i);
}


size_t ConfigScriptParser::IntVectorContext::getRuleIndex() const {
  return ConfigScriptParser::RuleIntVector;
}

void ConfigScriptParser::IntVectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntVector(this);
}

void ConfigScriptParser::IntVectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntVector(this);
}

ConfigScriptParser::IntVectorContext* ConfigScriptParser::intVector() {
  IntVectorContext *_localctx = _tracker.createInstance<IntVectorContext>(_ctx, getState());
  enterRule(_localctx, 10, ConfigScriptParser::RuleIntVector);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(71);
      match(ConfigScriptParser::INT);
      setState(74); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ConfigScriptParser::INT);
     auto v = _localctx->INT(); std::for_each(v.begin(), v.end(), [&](auto* node) { _localctx->elements.push_back(std::stoi(node->getText())); }); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatVectorContext ------------------------------------------------------------------

ConfigScriptParser::FloatVectorContext::FloatVectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ConfigScriptParser::FloatVectorContext::FLOAT() {
  return getTokens(ConfigScriptParser::FLOAT);
}

tree::TerminalNode* ConfigScriptParser::FloatVectorContext::FLOAT(size_t i) {
  return getToken(ConfigScriptParser::FLOAT, i);
}


size_t ConfigScriptParser::FloatVectorContext::getRuleIndex() const {
  return ConfigScriptParser::RuleFloatVector;
}

void ConfigScriptParser::FloatVectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatVector(this);
}

void ConfigScriptParser::FloatVectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatVector(this);
}

ConfigScriptParser::FloatVectorContext* ConfigScriptParser::floatVector() {
  FloatVectorContext *_localctx = _tracker.createInstance<FloatVectorContext>(_ctx, getState());
  enterRule(_localctx, 12, ConfigScriptParser::RuleFloatVector);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      match(ConfigScriptParser::FLOAT);
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ConfigScriptParser::FLOAT);
     auto v = _localctx->FLOAT(); std::for_each(v.begin(), v.end(), [&](auto* node) { _localctx->elements.push_back(std::stof(node->getText())); }); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

ConfigScriptParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConfigScriptParser::CommentContext::LINE_COMMENT() {
  return getToken(ConfigScriptParser::LINE_COMMENT, 0);
}

tree::TerminalNode* ConfigScriptParser::CommentContext::BLOCK_COMMENT() {
  return getToken(ConfigScriptParser::BLOCK_COMMENT, 0);
}


size_t ConfigScriptParser::CommentContext::getRuleIndex() const {
  return ConfigScriptParser::RuleComment;
}

void ConfigScriptParser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void ConfigScriptParser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ConfigScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}

ConfigScriptParser::CommentContext* ConfigScriptParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 14, ConfigScriptParser::RuleComment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    _la = _input->LA(1);
    if (!(_la == ConfigScriptParser::LINE_COMMENT

    || _la == ConfigScriptParser::BLOCK_COMMENT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ConfigScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  configscriptParserInitialize();
#else
  ::antlr4::internal::call_once(configscriptParserOnceFlag, configscriptParserInitialize);
#endif
}
