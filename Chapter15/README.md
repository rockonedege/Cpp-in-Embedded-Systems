# Chapter 15: Practical Patterns – Building a Temperature Publisher

Firmware examples in the `observer` project. A temperature publisher notifies
observers (a display and a data sender) using different implementations of the
observer pattern. Each example is a separate main file:

- `main_observer_rt.cpp` — runtime observer with virtual interfaces (default)
- `main_observer_ct_basic.cpp` — basic compile-time observer
- `main_observer_ct.cpp` — generalized compile-time observer

## Build

From `observer`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_observer_ct.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
