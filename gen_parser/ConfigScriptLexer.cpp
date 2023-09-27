
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
      "T__0", "T__1", "STRING", "BOOL", "Identifier", "INT", "FLOAT", "STRING_TEXT", 
      "ESCAPE_SEQUENCE", "EOL", "WHITESPACE", "ALPHA", "NUM", "LINE_COMMENT", 
      "BLOCK_COMMENT"
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
      "", "", "", "STRING", "BOOL", "Identifier", "INT", "FLOAT", "WHITESPACE", 
      "ALPHA", "NUM", "LINE_COMMENT", "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,12,142,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,1,0,1,0,1,1,1,1,1,2,1,2,1,2,5,2,39,8,2,10,2,12,2,42,9,2,1,2,1,2,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,55,8,3,1,4,1,4,1,4,5,4,60,8,4,
  	10,4,12,4,63,9,4,1,5,1,5,3,5,67,8,5,1,5,1,5,5,5,71,8,5,10,5,12,5,74,9,
  	5,3,5,76,8,5,1,6,3,6,79,8,6,1,6,4,6,82,8,6,11,6,12,6,83,1,6,1,6,4,6,88,
  	8,6,11,6,12,6,89,1,7,1,7,4,7,94,8,7,11,7,12,7,95,1,8,1,8,3,8,100,8,8,
  	1,9,3,9,103,8,9,1,9,1,9,1,10,4,10,108,8,10,11,10,12,10,109,1,10,1,10,
  	1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,13,5,13,122,8,13,10,13,12,13,125,
  	9,13,1,13,1,13,1,14,1,14,1,14,1,14,5,14,133,8,14,10,14,12,14,136,9,14,
  	1,14,1,14,1,14,1,14,1,14,1,134,0,15,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	0,17,0,19,0,21,8,23,9,25,10,27,11,29,12,1,0,8,1,0,49,57,1,0,48,57,2,0,
  	43,43,45,45,4,0,10,10,13,13,34,34,92,92,5,1,34,34,92,92,98,98,102,102,
  	116,116,3,0,9,10,13,13,32,32,3,0,65,90,95,95,97,122,2,0,10,10,13,13,155,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,1,31,1,0,0,0,3,33,1,0,0,0,5,35,1,0,0,0,7,54,1,0,0,0,9,56,
  	1,0,0,0,11,75,1,0,0,0,13,78,1,0,0,0,15,93,1,0,0,0,17,97,1,0,0,0,19,102,
  	1,0,0,0,21,107,1,0,0,0,23,113,1,0,0,0,25,115,1,0,0,0,27,117,1,0,0,0,29,
  	128,1,0,0,0,31,32,5,123,0,0,32,2,1,0,0,0,33,34,5,125,0,0,34,4,1,0,0,0,
  	35,40,5,34,0,0,36,39,3,15,7,0,37,39,3,19,9,0,38,36,1,0,0,0,38,37,1,0,
  	0,0,39,42,1,0,0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,43,1,0,0,0,42,40,1,0,
  	0,0,43,44,5,34,0,0,44,6,1,0,0,0,45,46,5,116,0,0,46,47,5,114,0,0,47,48,
  	5,117,0,0,48,55,5,101,0,0,49,50,5,102,0,0,50,51,5,97,0,0,51,52,5,108,
  	0,0,52,53,5,115,0,0,53,55,5,101,0,0,54,45,1,0,0,0,54,49,1,0,0,0,55,8,
  	1,0,0,0,56,61,3,23,11,0,57,60,3,23,11,0,58,60,3,25,12,0,59,57,1,0,0,0,
  	59,58,1,0,0,0,60,63,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,10,1,0,0,0,
  	63,61,1,0,0,0,64,76,5,48,0,0,65,67,5,45,0,0,66,65,1,0,0,0,66,67,1,0,0,
  	0,67,68,1,0,0,0,68,72,7,0,0,0,69,71,7,1,0,0,70,69,1,0,0,0,71,74,1,0,0,
  	0,72,70,1,0,0,0,72,73,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,0,75,64,1,0,0,
  	0,75,66,1,0,0,0,76,12,1,0,0,0,77,79,7,2,0,0,78,77,1,0,0,0,78,79,1,0,0,
  	0,79,81,1,0,0,0,80,82,3,25,12,0,81,80,1,0,0,0,82,83,1,0,0,0,83,81,1,0,
  	0,0,83,84,1,0,0,0,84,85,1,0,0,0,85,87,5,46,0,0,86,88,3,25,12,0,87,86,
  	1,0,0,0,88,89,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,14,1,0,0,0,91,94,
  	8,3,0,0,92,94,3,17,8,0,93,91,1,0,0,0,93,92,1,0,0,0,94,95,1,0,0,0,95,93,
  	1,0,0,0,95,96,1,0,0,0,96,16,1,0,0,0,97,99,5,92,0,0,98,100,7,4,0,0,99,
  	98,1,0,0,0,100,18,1,0,0,0,101,103,5,13,0,0,102,101,1,0,0,0,102,103,1,
  	0,0,0,103,104,1,0,0,0,104,105,5,10,0,0,105,20,1,0,0,0,106,108,7,5,0,0,
  	107,106,1,0,0,0,108,109,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,111,
  	1,0,0,0,111,112,6,10,0,0,112,22,1,0,0,0,113,114,7,6,0,0,114,24,1,0,0,
  	0,115,116,7,1,0,0,116,26,1,0,0,0,117,118,5,47,0,0,118,119,5,47,0,0,119,
  	123,1,0,0,0,120,122,8,7,0,0,121,120,1,0,0,0,122,125,1,0,0,0,123,121,1,
  	0,0,0,123,124,1,0,0,0,124,126,1,0,0,0,125,123,1,0,0,0,126,127,6,13,0,
  	0,127,28,1,0,0,0,128,129,5,47,0,0,129,130,5,42,0,0,130,134,1,0,0,0,131,
  	133,9,0,0,0,132,131,1,0,0,0,133,136,1,0,0,0,134,135,1,0,0,0,134,132,1,
  	0,0,0,135,137,1,0,0,0,136,134,1,0,0,0,137,138,5,42,0,0,138,139,5,47,0,
  	0,139,140,1,0,0,0,140,141,6,14,0,0,141,30,1,0,0,0,19,0,38,40,54,59,61,
  	66,72,75,78,83,89,93,95,99,102,109,123,134,1,6,0,0
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
