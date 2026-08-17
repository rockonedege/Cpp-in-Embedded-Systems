# Chapter 2: Challenges in Embedded Systems with Limited Resources

Standalone examples exploring the cost and control of dynamic memory
allocation.

Each example is a single self-contained file — paste it into
[Compiler Explorer](https://godbolt.org/) to build it, run it, and inspect the
generated assembly.

The folder contains following examples:
- `vector_dyn_mem.cpp` — how `std::vector` growth triggers repeated
  allocations
- `vector_dyn_mem_reserve.cpp` — taming reallocation with `reserve()`
- `vector_pmr.cpp` — `std::pmr` vectors backed by a fixed buffer instead of
  the heap
- `new_deleted.cpp` — banning heap allocation by deleting `operator new`
- `terminate_handler.cpp` — a custom terminate handler
- `instrument_functions.cpp` — tracing calls with function instrumentation
  (add `-finstrument-functions` to the compiler options in Compiler Explorer)
