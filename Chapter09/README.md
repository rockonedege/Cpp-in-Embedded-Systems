# Chapter 9: Improving Type-Safety with Strong Types

Firmware examples in the `type_safety` project. Each example is a separate
main file:

- `main_usual_arithmetic_conversion.cpp` — surprising results of implicit
  arithmetic conversions (default)
- `main_reinterpret_cast.cpp` — `reinterpret_cast` and memory-mapped register
  access
- `main_type_punning.cpp` — type punning: what is and isn't well-defined
- `main_strong_types.cpp` — strong types and user-defined literals for a
  misuse-resistant BLE API

## Build

From `type_safety`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_strong_types.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```

Output is printed over the emulated UART. Quit Renode with `q` in its console.
