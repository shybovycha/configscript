#include <iostream>
#include <map>
#include <variant>

#include <antlr4-runtime.h>

#include "gen_parser/ConfigScriptLexer.h"
#include "gen_parser/ConfigScriptParser.h"
#include "gen_parser/ConfigScriptBaseListener.h"

#pragma execution_character_set("utf-8")

void printAny(std::any value)
{
    if (value.type() == typeid(std::string))
    {
        std::cout << "(str){ " << std::any_cast<std::string>(value) << " };";
    }
    else if (value.type() == typeid(int))
    {
        std::cout << "(int){ " << std::any_cast<int>(value) << " };";
    }
    else if (value.type() == typeid(float))
    {
        std::cout << "(float){ " << std::any_cast<float>(value) << " };";
    }
    else if (value.type() == typeid(std::vector<int>))
    {
        auto vec = std::any_cast<std::vector<int>>(value);

        std::cout << "(int[]){ ";

        for (auto val : vec)
        {
            std::cout << val << ", ";
        }

        std::cout << " };";
    }
    else if (value.type() == typeid(std::vector<float>))
    {
        auto vec = std::any_cast<std::vector<float>>(value);

        std::cout << "(float[]){ ";

        for (auto val : vec)
        {
            std::cout << val << ", ";
        }

        std::cout << " };";
    }
    else if (value.type() == typeid(std::map<std::string, std::any>))
    {
        auto vec = std::any_cast<std::map<std::string, std::any>>(value);

        std::cout << "(obj){ ";

        for (auto& val : vec)
        {
            std::cout << val.first << " = ";

            printAny(val.second);
        }

        std::cout << " };";
    }
}

int main()
{
    const auto configSource = R"(
// This is a comment
object_keyword "Example/ObjectName" // <--- this can not be just Example/ObjectName
{
    attribute_name "some value"

    object_keyword2 "Nested Object"
    {
        other_attribute 1 2 3
        // and so on..
        /* block comment */
    }
}
)";

    antlr4::ANTLRInputStream input(configSource);
    
    ConfigScriptLexer lexer(&input);
    
    antlr4::CommonTokenStream tokens(&lexer);

    ConfigScriptParser parser(&tokens);
    
    antlr4::tree::ParseTree* tree = parser.config();

    auto s = tree->toStringTree(&parser);
    
    std::cout << "Parse Tree: " << s << std::endl;

    auto objects = antlrcpp::downCast< ConfigScriptParser::ConfigContext*>(tree)->object();

    std::cout << "Objects found: " << objects.size() << std::endl;

    for (auto o : objects)
    {
        std::cout << "[" << o->name << "] { ";

        auto objectValue = o->objectValue();
        auto propertyMap = objectValue->propertyMap;

        for (auto& p : propertyMap)
        {
            std::cout << p.first << " = ";
            
            printAny(p.second);

            std::cout << std::endl;
        }

        std::cout << " } " << std::endl;
    }

    return 0;
}
