cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(antlr_configscript_cpp VERSION 0.1.1 LANGUAGES CXX)

add_library(configscript
    "gen_parser/ConfigScriptLexer.cpp"
    "gen_parser/ConfigScriptLexer.h"
    "gen_parser/ConfigScriptParser.cpp"
    "gen_parser/ConfigScriptParser.h"
    "gen_parser/ConfigScriptBaseListener.cpp"
    "gen_parser/ConfigScriptBaseListener.h"
)

set_property(TARGET configscript PROPERTY CXX_STANDARD 20)

find_package(antlr4-runtime CONFIG REQUIRED)
target_link_libraries(configscript PUBLIC antlr4_shared)
target_include_directories(configscript PUBLIC ${ANTLR4_INCLUDE_DIR})

# ---

add_executable(example
    "example.cpp"
)

set_property(TARGET example PROPERTY CXX_STANDARD 20)

target_link_libraries(example PRIVATE configscript)
