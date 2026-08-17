# Chapter 4: Setting Up the Development Environment for a C++ Embedded Project

A minimal bare-metal firmware project (`bare`) for the STM32F072 target, used
to set up the development environment: CMake, the GNU ARM toolchain, and the
Renode emulator. The `Dockerfile` builds the container image with all tools
installed.

## Install and run docker image
### Pull the image
`docker pull mahmutbegovic/cpp_in_embedded_systems:latest`
### Run the image
`docker run -d -it --name dev_env mahmutbegovic/cpp_in_embedded_systems`
### Enter bash
`docker exec -it dev_env /bin/bash`



## Build the example

From `bare`:

```sh
cmake -B build
cmake --build build
```

## Run

```sh
cmake --build build --target run_in_renode
```

Output is printed over the emulated UART. Quit Renode with `q` in its console.
