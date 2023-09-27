# ConfigScript

## Overview

This is a grammar in ANTLR for a config markup language, similar to [OGRE Scripts](https://ogrecave.github.io/ogre/api/latest/_scripts.html):

```
// This is a comment
object_keyword "Example/ObjectName"
{
    attribute_name "some value"

    object_keyword2 "Nested Object"
    {
        other_attribute 1 2 3
        /* block comment */
    }
}
```

This repo includes a parser implementation in C++, so grammar is spiced up with the C++-related [actions](https://github.com/antlr/antlr4/blob/master/doc/actions.md).

## Building

First, generate the C++ sources for the grammar parser using [ANTLR 4.13.0 JAR](https://www.antlr.org/download/antlr-4.13.0-complete.jar):

```bash
java -jar antlr-4.13.0-complete.jar -o gen_parser -Dlanguage=Cpp ConfigScript.g4
```

**NOTE:** it is important to keep ANTLR4 generator version in sync with what is [provided by the vcpkg](https://github.com/microsoft/vcpkg/blob/master/ports/antlr4/portfile.cmake).

Run CMake specifying [vcpkg](https://github.com/microsoft/vcpkg) as a toolchain:

```bash
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE="[path to vcpkg]/scripts/buildsystems/vcpkg.cmake"
```

Then, build the project:

```bash
cmake --build build
```

## Usage

First, add the necessary headers to your code:

```cpp
#include <antlr4-runtime.h>

#include "gen_parser/ConfigScriptLexer.h"
#include "gen_parser/ConfigScriptParser.h"
#include "gen_parser/ConfigScriptBaseListener.h"
```

Preferably, set the following pragma directive to use UTF-8 encoding:

```cpp
#pragma execution_character_set("utf-8")
```

Parse the code:

```cpp
const auto configSource = R"(
// This is a comment
my_object_1 "Example/ObjectName" // <--- this can not be just Example/ObjectName (no quotes)
{
    some_attribute "some value"

    my_object_2 "Nested Object"
    {
        other_attribute 1 2 3
        // and so on..
        /* block comment */
    }
}
)";

// transform the input to antlr4 format
antlr4::ANTLRInputStream input(configSource);

// instantiate a lexer
ConfigScriptLexer lexer(&input);

// extract tokens from the input (via lexer)
antlr4::CommonTokenStream tokens(&lexer);

// instantiate a parser
ConfigScriptParser parser(&tokens);

// parse the source into a tree
antlr4::tree::ParseTree* tree = parser.config();
```

Then, the top-level objects from the config are available via

```cpp
auto objects = antlrcpp::downCast<ConfigScriptParser::ConfigContext*>(tree)->object();
```

To access the top-level object body (which is a map/dictionary of properties), use

```cpp
auto objectValue = obj->value;

std::map<std::string, std::any> propertyMap = objectValue->propertyMap;
```

Each property is of `std::any` type, so you would have to cast it to whatever it is in order to access a specific property value:

```cpp
auto property1 = std::any_cast<std::string>(propertyValue1); // string values
auto property2 = std::any_cast<std::vector<float>>(propertyValue2); // array of numbers values
```

If a property is an object on its own, you will have to cast it to `ConfigScriptParser::ObjectValueContext*` first:

```cpp
auto obj = std::any_cast<ConfigScriptParser::ObjectValueContext*>(value);

auto properties = obj->propertyMap;
```

Objects can have a _classifier_, which is a string following the object _name_:

```
object_name "object classifier"
{
  // properties
}
```
