# angelscript - AngelScript Embedded Scripting Language

This is a `build2` package repository for [AngelScript](https://www.angelcode.com/angelscript/),
a flexible, cross-platform scripting library designed to allow applications to extend
their functionality through external scripts.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libangelscript` in your `build2`-based project, see the accompanying
[`PACKAGE-README.md`](libangelscript/PACKAGE-README.md) file; for the
addon library see [`libangelscript-addon/PACKAGE-README.md`](libangelscript-addon/PACKAGE-README.md).

The development setup for `angelscript` uses the standard `bdep`-based workflow.
For example:

```
git clone https://github.com/build2-packaging/angelscript.git
cd angelscript

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
