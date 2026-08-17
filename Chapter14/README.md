# Chapter 14: Enhancing Super-Loop with Sequencer

Firmware examples in the `sequencer` project. Each example is a separate main
file:

- `main_task.cpp` — a task abstraction over `etl::delegate` and
  `std::function` (default)
- `main_pq.cpp` — ordering tasks with a priority queue
- `main_seq.cpp` — the sequencer running prioritized tasks

## Build

From `sequencer`:

```sh
cmake -B build
cmake --build build
```

To build a different example:

```sh
cmake -B build -DMAIN_CPP_FILE_NAME=main_seq.cpp
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```
