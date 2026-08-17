# Chapter 7: Strengthening Firmware – Practical C++ Error Handling Methods

Firmware examples in the `error_handling` project. Each example is a separate
main file:

- `main_assert.cpp` — assert-based error handling (default)
- `main_exceptions.cpp` — exceptions on an embedded target
- `main_optional.cpp` — signaling errors with `std::optional`
- `main_expected.cpp` — signaling errors with `std::expected`

## Build

From `error_handling`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_expected.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
