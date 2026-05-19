# libangelscript - AngelScript

This is a `build2` package for the [AngelScript](https://www.angelcode.com/angelscript/)
C++ library. It provides an embedded, cross-platform scripting engine that allows applications
to extend their functionality through external scripts.


## Usage

To start using `libangelscript` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libangelscript ^2.38.0
```

Then import the library in your `buildfile`:

```
import libs = libangelscript%lib{angelscript}
```


## Importable Targets

This package provides the following importable targets:

```
lib{angelscript}
```

The `lib{angelscript}` target provides the AngelScript scripting engine. Link against
it to embed a script engine in your application.


## Configuration Variables

```
[bool] config.libangelscript.no_exceptions ?= false
```

Setting `config.libangelscript.no_exceptions` to `true` compiles the library with
`-DAS_NO_EXCEPTIONS`, disabling C++ exception support in AngelScript. Use this when
building for targets or configurations where exceptions are unavailable or undesirable.
