# Chapter 17: Libraries and Frameworks

Firmware project `cib` — an application composed with the
[cib](https://github.com/intel/compile-time-init-build) library: components
are wired together with compile-time initialization and build.

## Build

From `cib`:

```sh
cmake -B build
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
