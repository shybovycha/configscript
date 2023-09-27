#pragma once

#include <format>
#include <iostream>
#include <map>
#include <variant>
#include <any>

#include <antlr4-runtime.h>

#include "gen_parser/ConfigScriptLexer.h"
#include "gen_parser/ConfigScriptParser.h"
#include "gen_parser/ConfigScriptBaseListener.h"

#pragma execution_character_set("utf-8")

namespace ConfigScript
{
    template <typename T>
    struct Vec2 {
        T x;
        T y;
    };

    template <typename T>
    struct Vec3 {
        T x;
        T y;
        T z;
    };

    template <typename T>
    struct Vec4 {
        T x;
        T y;
        T z;
        T w;
    };

    using Vec2i = Vec2<int>;
    using Vec3i = Vec3<int>;
    using Vec4i = Vec4<int>;

    using Vec2f = Vec2<float>;
    using Vec3f = Vec3<float>;
    using Vec4f = Vec4<float>;

    struct Object;

    using PropertyType = std::variant<Vec2i, Vec3i, Vec4i, Vec2f, Vec3f, Vec4f, Object, std::string, int, float, bool>;

    struct Object {
        std::string name;
        std::string classifier;
        std::map<std::string, PropertyType> properties;
    };

    struct Parser {
        static PropertyType convertValue(std::any value) {
            if (value.type() == typeid(std::string))
            {
                return std::any_cast<std::string>(value);
            }
            else if (value.type() == typeid(int))
            {
                return std::any_cast<int>(value);
            }
            else if (value.type() == typeid(float))
            {
                return std::any_cast<float>(value);
            }
            else if (value.type() == typeid(std::vector<int>))
            {
                auto vec = std::any_cast<std::vector<int>>(value);

                if (vec.size() < 2) {
                    throw "Vector does not contain 2+ elements";
                }

                if (vec.size() > 4) {
                    throw "Vector contains more than 4 elements";
                }

                if (vec.size() == 2) {
                    return Vec2i{ vec[0], vec[1] };
                }

                if (vec.size() == 3) {
                    return Vec3i{ vec[0], vec[1], vec[2] };
                }

                if (vec.size() == 4) {
                    return Vec4i{ vec[0], vec[1], vec[2], vec[3]};
                }
            }
            else if (value.type() == typeid(std::vector<float>))
            {
                auto vec = std::any_cast<std::vector<float>>(value);

                if (vec.size() < 2) {
                    throw "Vector does not contain 2+ elements";
                }

                if (vec.size() > 4) {
                    throw "Vector contains more than 4 elements";
                }

                if (vec.size() == 2) {
                    return Vec2f{ vec[0], vec[1] };
                }

                if (vec.size() == 3) {
                    return Vec3f{ vec[0], vec[1], vec[2] };
                }

                if (vec.size() == 4) {
                    return Vec4f{ vec[0], vec[1], vec[2], vec[3] };
                }
            }
            else if (value.type() == typeid(ConfigScriptParser::ObjectValueContext*))
            {
                auto obj = std::any_cast<ConfigScriptParser::ObjectValueContext*>(value);

                std::map<std::string, PropertyType> props;

                for (auto& prop_kv : obj->properties)
                {
                    props[prop_kv.first] = convertValue(prop_kv.second);
                }

                return Object{ .name = obj->name, .classifier = obj->classifier, .properties = props };
            }
            else if (value.type() == typeid(ConfigScriptParser::TopLevelObjectContext*))
            {
                auto obj = std::any_cast<ConfigScriptParser::TopLevelObjectContext*>(value);

                std::map<std::string, PropertyType> props;

                for (auto& prop_kv : obj->value->properties)
                {
                    props[prop_kv.first] = convertValue(prop_kv.second);
                }

                return Object{ .name = obj->name, .classifier = obj->value->classifier, .properties = props };
            }

            throw "Unknown value";
        }

        static std::vector<Object> parse(std::string_view source) {
            antlr4::ANTLRInputStream input(source);

            ConfigScriptLexer lexer(&input);

            antlr4::CommonTokenStream tokens(&lexer);

            ConfigScriptParser parser(&tokens);

            antlr4::tree::ParseTree* tree = parser.config();

            auto objects = antlrcpp::downCast<ConfigScriptParser::ConfigContext*>(tree)->topLevelObject();

            std::vector<Object> result;

            for (auto& object : objects) {
                Object o = std::get<Object>(convertValue(object));

                result.push_back(o);
            }

            return result;
        }
    };
}
