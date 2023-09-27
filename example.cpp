#include <numeric>
#include <format>
#include <iostream>
#include <map>
#include <variant>

#include "parser.hpp"

void prettyPrint(ConfigScript::PropertyType value)
{
    if (std::holds_alternative<std::string>(value))
    {
        std::cout << "(str) { " << std::get<std::string>(value) << " }";
    }
    else if (std::holds_alternative<int>(value))
    {
        std::cout << "(int) { " << std::get<int>(value) << " }";
    }
    else if (std::holds_alternative<float>(value))
    {
        std::cout << "(float) { " << std::get<float>(value) << " }";
    }
    else if (std::holds_alternative<ConfigScript::Vec2i>(value))
    {
        auto& vec = std::get<ConfigScript::Vec2i>(value);

        std::cout << std::format("(vec2i) {{ {}, {} }}\n", vec.x, vec.y);
    }
    else if (std::holds_alternative<ConfigScript::Vec3i>(value))
    {
        auto& vec = std::get<ConfigScript::Vec3i>(value);

        std::cout << std::format("(vec3i) {{ {}, {}, {} }}\n", vec.x, vec.y, vec.z);
    }
    else if (std::holds_alternative<ConfigScript::Vec4i>(value))
    {
        auto& vec = std::get<ConfigScript::Vec4i>(value);

        std::cout << std::format("(vec4i) {{ {}, {}, {}, {} }}\n", vec.x, vec.y, vec.z, vec.w);
    }
    else if (std::holds_alternative<ConfigScript::Vec2f>(value))
    {
        auto& vec = std::get<ConfigScript::Vec2f>(value);

        std::cout << std::format("(vec2f) {{ {}, {} }}\n", vec.x, vec.y);
    }
    else if (std::holds_alternative<ConfigScript::Vec3f>(value))
    {
        auto& vec = std::get<ConfigScript::Vec3f>(value);

        std::cout << std::format("(vec3f) {{ {}, {}, {} }}\n", vec.x, vec.y, vec.z);
    }
    else if (std::holds_alternative<ConfigScript::Vec4f>(value))
    {
        auto& vec = std::get<ConfigScript::Vec4f>(value);

        std::cout << std::format("(vec4f) {{ {}, {}, {}, {} }}\n", vec.x, vec.y, vec.z, vec.w);
    }
    else if (std::holds_alternative<std::vector<std::string>>(value))
    {
        auto& list = std::get<std::vector<std::string>>(value);
        std::transform(list.begin(), list.end(), list.begin(), [](auto s) { return std::format("\"{}\"", s); });
        auto s = std::accumulate(std::next(list.begin()), list.end(), list[0], [](auto s1, auto s2) { return std::format("{}, {}", s1, s2); });

        std::cout << std::format("(strings) {{ {} }}\n", s);
    }
    else if (std::holds_alternative<ConfigScript::Object>(value))
    {
        auto& obj = std::get<ConfigScript::Object>(value);

        auto& objectName = obj.name;
        auto& objectClassifier = obj.classifier;

        std::cout << std::format("{} (obj, {}) {{\n", objectName, objectClassifier);

        auto& properties = obj.properties;

        for (auto& p : properties)
        {
            std::cout << p.first << " = ";

            prettyPrint(p.second);

            std::cout << std::endl;
        }

        std::cout << "}\n " << std::endl;
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

        list_of_strings [
            "item #1"
            "item #2"
            "item #3"
            "item #4"
            "item #5"
        ]

        my_long_string "
long
long
loooong
maaaan!
        "

        /*
        block
        comment
        */
    }
}
)";

    auto config = ConfigScript::Parser::parse(configSource);

    for (auto& obj : config)
    {
        prettyPrint(obj);
    }

    return 0;
}
