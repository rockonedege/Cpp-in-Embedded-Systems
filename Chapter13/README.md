# Chapter 13: Working with C Libraries

Two firmware projects:

- `uart_c_hal_wrapper` — a C++ wrapper over the C STM32 HAL UART driver
- `lfs_raii` — the littlefs filesystem on a RAM block device. Two examples:
  - `main.cpp` — using the littlefs C API directly (default)
  - `main_lfs_raii.cpp` — RAII wrappers around littlefs

## Build

From `uart_c_hal_wrapper` or `lfs_raii`:

```sh
cmake -B build
cmake --build build
```

To build the RAII example in `lfs_raii`:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_lfs_raii.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
