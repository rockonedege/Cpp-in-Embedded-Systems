# Chapter 5: Classes – Building Blocks of C++ Applications

Examples on classes.

- `class_basics.cpp` — standalone example of class fundamentals, explore it in
  [Compiler Explorer](https://godbolt.org/)
- `gsm_lib` — firmware project with a GSM library class built on top of the
  UART HAL

## Build and run the firmware project

From `gsm_lib`:

```sh
cmake -B build
cmake --build build
cmake --build build --target run_in_renode
```
