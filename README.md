# GameHub
Explore the GameHub repository, a collection of diverse projects ranging from strategic classics like StarCraft and WarCraft to the intense Counterstrike, all the way to the vivid world of RGBTask. 

## Table of Contents

- [RGBTask](#rgbtas)
  - [Features](#features)
  - [Prerequisites](#prerequisites)
  - [How to Compile](#how-to-compile)
  - [How to Run](#how-to-run)
  - [Project Structure](#project-structure)
  - [Algorithm Details](#algorithm-details)
  - [C API](#c-api)
  - [Python Integration](#python-integration)

- [Starcraft](#starcraft)
  - [Features](#features)
  - [Prerequisites](#prerequisites)
  - [How to Compile](#how-to-compile)
  - [How to Run](#how-to-run)
  - [Project Structure](#project-structure)

- [Warcraft](#warcraft)
  - [Features](#features)
  - [Prerequisites](#prerequisites)
  - [How to Compile](#how-to-compile)
  - [How to Run](#how-to-run)
  - [Example Input](#example-input)
  - [Example Output](#example-output)
  - [Project Structure](#project-structure)

- [CounterStrike](#counterstrike)
  - [Features](#features)
  - [Prerequisites](#prerequisites)
  - [How to Compile](#how-to-compile)
  - [How to Run](#how-to-run)
  - [Example Input](#example-input)
  - [Example Output](#example-output)
  - [Project Structure](#project-structure)

- [Parent CMake Configuration](#parent-cmake-configuration)

## RGBTask

This program processes a matrix of colors and finds the longest contiguous sequence of the same color. The algorithm is implemented in C and exposed as a C API, with Python integration available.

### Features

- **Color Sequence Processing**: Identifies the longest contiguous sequence of the same color in a matrix.
- **C API for Integration**: Provides a C API for easy integration with other programs.
- **Python Integration**: Includes a Python version that utilizes the C API for seamless integration.

### Prerequisites

- CMake (version 3.5.1 or higher)
- C Compiler (for the C API)
- Python (for the Python integration)

### How to Compile

1. Navigate to the root directory of the project.
2. Create a build directory: `mkdir build && cd build`.
3. Run CMake: `cmake ..`.
4. Build the shared library: `cmake --build .`.

### How to Run

After compiling the program, you can use the Python script to process matrices:

```
python RGBTask.py matrix.txt
```
Replace 'matrix.txt' with the path to your matrix file.

### Algorithm Details
The algorithm uses a Breadth-First Search (BFS) approach to find the longest contiguous sequence of the same color.

### C API
The C API provides functions for finding the longest color sequence. See longest_sequence_lib.h for details.

### Python Integration
The Python script (RGBTask.py) demonstrates how to integrate the C API for seamless color sequence processing.

### Project Structure
src/: Contains the main program files.
lib/: Contains the C API implementation.
CMakeLists.txt: CMake configuration file for the project.

