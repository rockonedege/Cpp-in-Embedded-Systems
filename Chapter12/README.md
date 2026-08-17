# Chapter 12: Writing C++ HAL

Firmware examples in the `cpp_hal` project. Each example is a separate main
file:

- `main_basic_reg.cpp` — accessing registers through raw pointers (default)
- `main_type_safe_reg.cpp` — type-safe register access with templates
- `main_timer_peripheral.cpp` — a timer peripheral abstraction

## Build

From `cpp_hal`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_type_safe_reg.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
