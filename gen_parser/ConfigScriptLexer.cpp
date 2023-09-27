
    #include <variant>
    #include <any>


// Generated from .\ConfigScript.g4 by ANTLR 4.13.0


#include "ConfigScriptLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ConfigScriptLexerStaticData final {
  ConfigScriptLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ConfigScriptLexerStaticData(const ConfigScriptLexerStaticData&) = delete;
  ConfigScriptLexerStaticData(ConfigScriptLexerStaticData&&) = delete;
  ConfigScriptLexerStaticData& operator=(const ConfigScriptLexerStaticData&) = delete;
  ConfigScriptLexerStaticData& operator=(ConfigScriptLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag configscriptlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ConfigScriptLexerStaticData *configscriptlexerLexerStaticData = nullptr;

void configscriptlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (configscriptlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(configscriptlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ConfigScriptLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "STRING", "BOOL", "DOUBLE_QUOTED_STRING", "SINGLE_QUOTED_STRING", 
      "Identifier", "SingleQuoteStringChar", "DoubleQuoteStringChar", "INT", 
      "FLOAT", "WHITESPACE", "ALPHA", "NUM", "LINE_COMMENT", "BLOCK_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,14,145,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,1,0,1,0,1,1,1,1,1,2,1,2,3,2,40,8,2,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,3,3,51,8,3,1,4,1,4,5,4,55,8,4,10,4,12,4,58,9,4,1,4,1,
  	4,1,5,1,5,5,5,64,8,5,10,5,12,5,67,9,5,1,5,1,5,1,6,1,6,1,6,5,6,74,8,6,
  	10,6,12,6,77,9,6,1,7,1,7,1,8,1,8,1,9,1,9,3,9,85,8,9,1,9,1,9,5,9,89,8,
  	9,10,9,12,9,92,9,9,3,9,94,8,9,1,10,3,10,97,8,10,1,10,4,10,100,8,10,11,
  	10,12,10,101,1,10,1,10,4,10,106,8,10,11,10,12,10,107,1,11,4,11,111,8,
  	11,11,11,12,11,112,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,
  	5,14,125,8,14,10,14,12,14,128,9,14,1,14,1,14,1,15,1,15,1,15,1,15,5,15,
  	136,8,15,10,15,12,15,139,9,15,1,15,1,15,1,15,1,15,1,15,1,137,0,16,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,0,17,0,19,8,21,9,23,10,25,11,27,12,29,13,
  	31,14,1,0,8,3,0,10,10,13,13,39,39,3,0,10,10,13,13,34,34,1,0,49,57,1,0,
  	48,57,2,0,43,43,45,45,3,0,9,10,13,13,32,32,3,0,65,90,95,95,97,122,2,0,
  	10,10,13,13,157,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,
  	0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,1,33,1,0,0,0,3,
  	35,1,0,0,0,5,39,1,0,0,0,7,50,1,0,0,0,9,52,1,0,0,0,11,61,1,0,0,0,13,70,
  	1,0,0,0,15,78,1,0,0,0,17,80,1,0,0,0,19,93,1,0,0,0,21,96,1,0,0,0,23,110,
  	1,0,0,0,25,116,1,0,0,0,27,118,1,0,0,0,29,120,1,0,0,0,31,131,1,0,0,0,33,
  	34,5,123,0,0,34,2,1,0,0,0,35,36,5,125,0,0,36,4,1,0,0,0,37,40,3,9,4,0,
  	38,40,3,11,5,0,39,37,1,0,0,0,39,38,1,0,0,0,40,6,1,0,0,0,41,42,5,116,0,
  	0,42,43,5,114,0,0,43,44,5,117,0,0,44,51,5,101,0,0,45,46,5,102,0,0,46,
  	47,5,97,0,0,47,48,5,108,0,0,48,49,5,115,0,0,49,51,5,101,0,0,50,41,1,0,
  	0,0,50,45,1,0,0,0,51,8,1,0,0,0,52,56,5,34,0,0,53,55,3,17,8,0,54,53,1,
  	0,0,0,55,58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,58,56,1,
  	0,0,0,59,60,5,34,0,0,60,10,1,0,0,0,61,65,5,39,0,0,62,64,3,15,7,0,63,62,
  	1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,68,1,0,0,0,67,65,
  	1,0,0,0,68,69,5,39,0,0,69,12,1,0,0,0,70,75,3,25,12,0,71,74,3,25,12,0,
  	72,74,3,27,13,0,73,71,1,0,0,0,73,72,1,0,0,0,74,77,1,0,0,0,75,73,1,0,0,
  	0,75,76,1,0,0,0,76,14,1,0,0,0,77,75,1,0,0,0,78,79,8,0,0,0,79,16,1,0,0,
  	0,80,81,8,1,0,0,81,18,1,0,0,0,82,94,5,48,0,0,83,85,5,45,0,0,84,83,1,0,
  	0,0,84,85,1,0,0,0,85,86,1,0,0,0,86,90,7,2,0,0,87,89,7,3,0,0,88,87,1,0,
  	0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,94,1,0,0,0,92,90,1,0,
  	0,0,93,82,1,0,0,0,93,84,1,0,0,0,94,20,1,0,0,0,95,97,7,4,0,0,96,95,1,0,
  	0,0,96,97,1,0,0,0,97,99,1,0,0,0,98,100,3,27,13,0,99,98,1,0,0,0,100,101,
  	1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,103,1,0,0,0,103,105,5,46,0,
  	0,104,106,3,27,13,0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,
  	108,1,0,0,0,108,22,1,0,0,0,109,111,7,5,0,0,110,109,1,0,0,0,111,112,1,
  	0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,114,115,6,11,0,
  	0,115,24,1,0,0,0,116,117,7,6,0,0,117,26,1,0,0,0,118,119,7,3,0,0,119,28,
  	1,0,0,0,120,121,5,47,0,0,121,122,5,47,0,0,122,126,1,0,0,0,123,125,8,7,
  	0,0,124,123,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,
  	129,1,0,0,0,128,126,1,0,0,0,129,130,6,14,0,0,130,30,1,0,0,0,131,132,5,
  	47,0,0,132,133,5,42,0,0,133,137,1,0,0,0,134,136,9,0,0,0,135,134,1,0,0,
  	0,136,139,1,0,0,0,137,138,1,0,0,0,137,135,1,0,0,0,138,140,1,0,0,0,139,
  	137,1,0,0,0,140,141,5,42,0,0,141,142,5,47,0,0,142,143,1,0,0,0,143,144,
  	6,15,0,0,144,32,1,0,0,0,16,0,39,50,56,65,73,75,84,90,93,96,101,107,112,
  	126,137,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  configscriptlexerLexerStaticData = staticData.release();
}

}

ConfigScriptLexer::ConfigScriptLexer(CharStream *input) : Lexer(input) {
  ConfigScriptLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *configscriptlexerLexerStaticData->atn, configscriptlexerLexerStaticData->decisionToDFA, configscriptlexerLexerStaticData->sharedContextCache);
}

ConfigScriptLexer::~ConfigScriptLexer() {
  delete _interpreter;
}

std::string ConfigScriptLexer::getGrammarFileName() const {
  return "ConfigScript.g4";
}

const std::vector<std::string>& ConfigScriptLexer::getRuleNames() const {
  return configscriptlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ConfigScriptLexer::getChannelNames() const {
  return configscriptlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ConfigScriptLexer::getModeNames() const {
  return configscriptlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ConfigScriptLexer::getVocabulary() const {
  return configscriptlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ConfigScriptLexer::getSerializedATN() const {
  return configscriptlexerLexerStaticData->serializedATN;
}

const atn::ATN& ConfigScriptLexer::getATN() const {
  return *configscriptlexerLexerStaticData->atn;
}




void ConfigScriptLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  configscriptlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(configscriptlexerLexerOnceFlag, configscriptlexerLexerInitialize);
#endif
}
