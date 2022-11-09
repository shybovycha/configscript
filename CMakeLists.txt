cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(antlr_configscript_cpp VERSION 0.1.0 LANGUAGES CXX)

add_executable(antlr_configscript_cpp
    "main.cpp"
    "gen_parser/ConfigScriptLexer.cpp"
    "gen_parser/ConfigScriptLexer.h"
    "gen_parser/ConfigScriptParser.cpp"
    "gen_parser/ConfigScriptParser.h"
    "gen_parser/ConfigScriptBaseListener.cpp"
    "gen_parser/ConfigScriptBaseListener.h"
)

set_property(TARGET antlr_configscript_cpp PROPERTY CXX_STANDARD 20)

find_package(antlr4-runtime CONFIG REQUIRED)
target_link_libraries(antlr_configscript_cpp PRIVATE antlr4_shared)
target_include_directories(antlr_configscript_cpp PRIVATE ${ANTLR4_INCLUDE_DIR})
