# Libft

![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)
![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)

Libft is a comprehensive set of C utility functions. It is designed to provide enhanced functionality and common utility methods for C language programming. The library encompasses various functions to facilitate efficient, concise, and accessible programming.

## Prerequisites

Ensure you have the following tools installed:

1. **GCC**: GNU Compiler Collection.
2. **CMake**: Cross-platform make system tool.
3. **GoogleTest**: Testing framework for C++ (handed via CMake).

## Installation

Clone the repository:
```sh
git clone https://github.com/your-username/libft.git
cd libft
```

## Usage

The `Makefile` provides various commands to manage the build process:

- **Make all**: Build the library `libft.a`.
  ```sh
  make
  ```

- **Make clean**: Remove object files.
  ```sh
  make clean
  ```

- **Make fclean**: Remove object files and the library `libft.a`.
  ```sh
  make fclean
  ```

- **Make re**: Clean, then rebuild the library.
  ```sh
  make re
  ```

## Running Tests

Automated tests are facilitated through GoogleTest:

1. **Build the library and set up tests:**
   ```sh
   make test
   ```

2. **Run the tests:**
   ```sh
   make test
   ```
