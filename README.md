# C++ Project Overview

This project demonstrates a simple C++ application that includes basic arithmetic operations and utility functions. The project is organized into source files, utility modules, and tests to ensure functionality correctness.

## Project Structure

The project is structured as follows:

```
📁src
│   CMakeLists.txt
│   main.cpp
│   operations.cpp
│   operations.h
│   📁utils
│       CMakeLists.txt
│       utils.cpp
│       utils.h
📁tests
│   CMakeLists.txt
│   test_main.cpp
│   📁utils
│       CMakeLists.txt
│       test_utils.cpp
|CMakeLists.txt
```

## Installation

To build and run this project, you will need:
- C++ compiler supporting C++11 or higher
- CMake version 3.10 or higher
- Google Test (gtest) for running the unit tests
    ```bash
    git clone https://github.com/google/googletest.git
    cd googletest
    mkdir build && cd build
    cmake ..
    cmake --build .
    ```

    Or you can use ctrl+shift+b shortkey

### Cloning the Repository

```bash
git clone https://github.com/hiroyukikumazawa/qubic-gtest.git
cd qubic-gtest
```

### Building the Project

This project uses CMake for building:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

This will compile the source code and place the executable in the `build` directory.

## Running Tests

To run the tests, execute the following from the `build` directory:

```bash
./tests/test_exe
```

This will run all the unit tests defined in the `tests` subdirectories and output the test results.

## Usage

After building the project, you can run the main program as follows:

```bash
./src/main_exe
```

The output will display the results of the operations performed by the main application.
