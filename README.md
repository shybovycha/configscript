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

First, generate the C++ sources for the grammar parser using [ANTLR 4.10.1 JAR](https://www.antlr.org/download/antlr-4.10.1-complete.jar):

```bash
java -jar antlr-4.10.1-complete.jar -o gen_parser -Dlanguage=Cpp ConfigScript.g4
```

**NOTE:** it is important to keep ANTLR4 generator version in sync with what is provided by the vcpkg.
Until [this PR to update ANTLR4 port](https://github.com/microsoft/vcpkg/pull/27720) is merged into vcpkg repo, use the [`ANTLR v4.10.1`](https://www.antlr.org/download/antlr-4.10.1-complete.jar).
After the PR is merged, please upgrade to [`ANTLR v4.11.1`](https://www.antlr.org/download/antlr-4.11.1-complete.jar).

Run CMake specifying [vcpkg](https://github.com/microsoft/vcpkg) as a toolchain:

```bash
cmake -B out -S . "-DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake"
```

Then, build the project:

```bash
cmake --build out
```
