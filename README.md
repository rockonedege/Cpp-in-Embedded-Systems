# Cpp-in-Embedded-Systems
C++ in Embedded Systems, published by Packt 

## Install and run docker image
### Pull the image
`docker pull mahmutbegovic/cpp_in_embedded_systems:latest`
### Run the image
`docker run -d -it --name dev_env mahmutbegovic/cpp_in_embedded_systems`
### Enter bash
`docker exec -it dev_env /bin/bash`

## Chapters

| Chapter | Title |
|---|---|
| [Chapter 1](Chapter01) | Debunking Common Myths about C++ |
| [Chapter 2](Chapter02) | Challenges in Embedded Systems with Limited Resources |
| [Chapter 3](Chapter03) | Embedded C++ Ecosystem |
| [Chapter 4](Chapter04) | Setting Up the Development Environment for a C++ Embedded Project |
| [Chapter 5](Chapter05) | Classes – Building Blocks of C++ Applications |
| [Chapter 6](Chapter06) | Beyond Classes – Fundamental C++ Concepts |
| [Chapter 7](Chapter07) | Strengthening Firmware – Practical C++ Error Handling Methods |
| [Chapter 8](Chapter08) | Building Generic and Reusable Code with Templates |
| [Chapter 9](Chapter09) | Improving Type-Safety with Strong Types |
| [Chapter 10](Chapter10) | Writing Expressive Code with Lambdas |
| [Chapter 11](Chapter11) | Compile-Time Computation |
| [Chapter 12](Chapter12) | Writing C++ HAL |
| [Chapter 13](Chapter13) | Working with C Libraries |
| [Chapter 14](Chapter14) | Enhancing Super-Loop with Sequencer |
| [Chapter 15](Chapter15) | Practical Patterns – Building a Temperature Publisher |
| [Chapter 16](Chapter16) | Designing Scalable Finite State Machines |
| [Chapter 17](Chapter17) | Libraries and Frameworks |
| [Chapter 18](Chapter18) | Cross-Platform Development |

## Changes since publication

The code in this repository is maintained and may differ slightly from the
listings printed in the book. Notable changes (August 2026):

- All examples were formatted with clang-format using the configuration
  shipped in this repository, so brace placement and indentation can differ
  from the printed listings.
- Chapter 9, `main_strong_types.cpp`: getters return values instead of
  mutable references, narrowing conversions are explicit `static_cast`s, and
  the `_ms` literal asserts its range — the example now fully practices what
  the chapter preaches.
- Chapters 11–17, `signal.hpp`: the element type is checked to be
  floating-point, step computation uses the element type instead of `float`,
  and the default constructor zero-initializes the array.
- Chapters 11–17, `units.hpp`: the unit class is `constexpr`, the literal
  operators moved into the header (`units.cpp` was removed), `get_mili` was
  renamed to `get_milli`, and dividing a voltage by a resistance now yields a
  typed current.
- Chapter 14, `main_task.cpp` and `main_seq.cpp`: the `test` class moved out
  of `main()` to file scope. C++20 allows a local class's static member
  function as a template argument and the GCC 13.2 in the Docker image
  accepts it, but GCC 12 and older reject it — the change keeps the examples
  building on older toolchains too.
