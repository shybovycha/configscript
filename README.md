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

This repo includes a parser implementation in C++, so grammar is spiced up with the C++-specific [actions](https://github.com/antlr/antlr4/blob/master/doc/actions.md).

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
#include "parser.hpp"
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

// parse the source
auto config = ConfigScript::Parser::parse(configSource);
```

The `config` variable would then contain a list (`std::vector`) of top-level objects from the config.

To access the top-level object properties, use

```cpp
std::map<std::string, ConfigScript::PropertyType> properties = config[0].properties;
```

`ConfigScripr::PropertyType` is an alias for `std::variant` containing all possible value types:

* `int` and `float` vectors of 2, 3 or 4 components: `Vec2i`, `Vec3i`, `Vec4i`, `Vec2f`, `Vec3f`, `Vec4f`
* `std::string`
* `bool`
* `int`
* `float`
* objects, represented as 
  ```cpp
  ConfigScript::Object {
    std::string name;
    std::string classifier;
    std::map<std::string, ConfigScript::PropertyType> properties;
  }
  ```

Since `PropertyType` is alias for `std::variant`, you would have to cast it to whatever it is underneath in order to access a specific property value:

```cpp
auto property1 = std::get<std::string>(propertyValue1); // string values
auto property2 = std::get<ConfigScript::Vec3f>(propertyValue2); // 4-component float vector
```

Objects can have a _classifier_, which is a string following the object _name_:

```
object_name "object classifier"
{
  // properties
}
```
