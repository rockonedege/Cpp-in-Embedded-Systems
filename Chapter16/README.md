# Chapter 16: Designing Scalable Finite State Machines

Firmware examples in the `fsm` project. A BLE connection state machine
implemented in several ways. Each example is a separate main file:

- `main_fsm_simple.cpp` — switch-based state machine (default)
- `main_fsm_state_pattern.cpp` — the state pattern
- `main_fsm_state_pattern_tag_dispatch.cpp` — the state pattern with tag
  dispatch
- `main_fsm_boost_sml.cpp` — a transition table with Boost.SML

## Build

From `fsm`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_fsm_boost_sml.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
