# Chapter 11: Compile-Time Computation

Two projects:

- `compile_time` — firmware project. Each example is a separate main file:
  - `main_constexpr_mac_address.cpp` — building a MAC address at compile time
    (default)
  - `main_lookup_table.cpp` — a compile-time lookup table for a thermistor
    voltage divider
- `signal_generator` — host utility that generates signal data (`out.csv`)

## Build the firmware project

From `compile_time`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_lookup_table.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```

## Build and run the signal generator

From `signal_generator`:

```sh
cmake -B build
cmake --build build
./build/signal_gen
```

## Generate an image from created CSV file

```sh
graph out.csv -o curve.png
```

## Transfer generated image from the Linux based host machine

```sh
docker cp dev_env:/workspace/Cpp-in-Embedded-Systems/Chapter11/signal_generator/curve.png
```
