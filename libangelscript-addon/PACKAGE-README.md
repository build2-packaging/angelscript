# libangelscript-addon - AngelScript

This is a `build2` package for the [AngelScript](https://www.angelcode.com/angelscript/)
addon library. It provides the official collection of supplementary AngelScript modules,
including script arrays, dictionaries, math helpers, string integration, file I/O,
sockets, serialization, and more.


## Usage

To start using `libangelscript-addon` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libangelscript-addon ^2.38.0
```

Then import the library in your `buildfile`:

```
import libs = libangelscript-addon%lib{angelscript-addon}
```

Individual addon modules can also be imported directly when only specific
functionality is needed:

```
import libs = libangelscript-addon%lib{angelscript-scriptarray}
```


## Importable Targets

This package provides the following importable targets:

```
lib{angelscript-addon}
```

The `lib{angelscript-addon}` aggregate target bundles all addon modules into a
single target. Use this when you need multiple addons.

The following individual targets are available for fine-grained selection:
```
lib{angelscript-autowrapper}
lib{angelscript-contextmgr}
lib{angelscript-datetime}
lib{angelscript-debugger}
lib{angelscript-scriptany}
lib{angelscript-scriptarray}
lib{angelscript-scriptbuilder}
lib{angelscript-scriptdictionary}
lib{angelscript-scriptfile}
lib{angelscript-scriptgrid}
lib{angelscript-scripthandle}
lib{angelscript-scripthelper}
lib{angelscript-scriptmath}
lib{angelscript-scriptsocket}
lib{angelscript-scriptstdstring}
lib{angelscript-serializer}
lib{angelscript-weakref}
```


## Utility Programs

```
exe{angelscript-generateheader}
```

`exe{angelscript-generateheader}` is a code generator that produces `aswrappedcall.h`
(the `autowrapper` implementation) by writing it to stdout:

```
angelscript-generateheader > aswrappedcall.h
```

This is an upstream developer tool.


## Configuration Variables

This package provides no configuration variables.
