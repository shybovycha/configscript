#include <format>
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
        std::cout << "(str) { " << std::any_cast<std::string>(value) << " }";
    }
    else if (value.type() == typeid(int))
    {
        std::cout << "(int) { " << std::any_cast<int>(value) << " }";
    }
    else if (value.type() == typeid(float))
    {
        std::cout << "(float) { " << std::any_cast<float>(value) << " }";
    }
    else if (value.type() == typeid(std::vector<int>))
    {
        auto vec = std::any_cast<std::vector<int>>(value);

        std::cout << "(int[]) { ";

        for (auto val : vec)
        {
            std::cout << val << ", ";
        }

        std::cout << " }";
    }
    else if (value.type() == typeid(std::vector<float>))
    {
        auto vec = std::any_cast<std::vector<float>>(value);

        std::cout << "(float[]) { ";

        for (auto val : vec)
        {
            std::cout << val << ", ";
        }

        std::cout << " }";
    }
    else if (value.type() == typeid(ConfigScriptParser::ObjectValueContext*))
    {
        auto obj = std::any_cast<ConfigScriptParser::ObjectValueContext*>(value);

        std::cout << std::format("(obj, {}) {{\n", obj->classifier);

        auto props = obj->propertyMap;

        for (auto& prop_kv : props)
        {
            std::cout << prop_kv.first << " = ";

            printAny(prop_kv.second);
        }

        std::cout << "\n}";
    }
    else if (value.type() == typeid(ConfigScriptParser::ObjectContext*))
    {
        auto obj = std::any_cast<ConfigScriptParser::ObjectContext*>(value);

        auto objectName = obj->name;
        auto objectValue = obj->value;
        auto objectClassifier = objectValue->classifier;

        std::cout << std::format("<top level> {} ({}) {{\n", objectName, objectClassifier);

        auto propertyMap = objectValue->propertyMap;

        for (auto& p : propertyMap)
        {
            std::cout << p.first << " = ";

            printAny(p.second);

            std::cout << std::endl;
        }

        std::cout << "\n} " << std::endl;
    }
}

int main()
{
    const auto configSource = R"(
// This is a comment
my_object_1 "Example/ObjectName" // <--- this can not be just Example/ObjectName (no quotes)
{
    some_attribute "some value"

    my_object_2 "Nested Object"
    {
        other_attribute 1 2 3

        my_object_3 "Deeply nested Object"
        {
            some_other_attribute 1 2 3
        }

        // and so on..

        /*
        block
        comment
        */
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

    auto objects = antlrcpp::downCast<ConfigScriptParser::ConfigContext*>(tree)->object();

    std::cout << "Objects found: " << objects.size() << std::endl;

    for (auto obj : objects)
    {
        printAny(obj);
    }

    return 0;
}
