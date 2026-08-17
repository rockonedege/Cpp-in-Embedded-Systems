# Chapter 10: Writing Expressive Code with Lambdas

Firmware examples in the `lambdas` project. Each example is a separate main
file:

- `main_lambda_basics.cpp` — lambda syntax and captures (default)
- `main_std_function_command_pattern.cpp` — command pattern with
  `std::function`

## Build

From `lambdas`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_std_function_command_pattern.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
