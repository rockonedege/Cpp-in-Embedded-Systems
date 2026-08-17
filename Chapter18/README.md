# Chapter 18: Cross-Platform Development

Standalone examples on developing and testing firmware logic on the host,
against hardware-independent interfaces. You can explore them in
[Compiler Explorer](https://godbolt.org/) (add gtest under Libraries).

The folder contains following examples:
- `accelerometer_interface.cpp` — an accelerometer interface with a fake
  implementation for host-side testing
- `tap_detection_algo.cpp` — a tap detection algorithm written against the
  accelerometer interface, unit-tested with GoogleTest
