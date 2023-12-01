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
The RGBTask project employs the Breadth-First Search (BFS) algorithm to efficiently traverse the color matrix and identify the longest sequence of adjacent identical colors. This approach ensures a systematic exploration of the matrix, providing a robust solution for color sequence detection.

### C API
- longest_sequence_lib.c / longest_sequence_lib.h: Implements the color sequence algorithm and provides a C API.

### Python Integration
The Python script (RGBTask.py) demonstrates how to integrate the C API for seamless color sequence processing.

### Project Structure
src/: Contains the main program files.

lib/: Contains the C API implementation.

CMakeLists.txt: CMake configuration file for the project.

## StarCraft Simulator

Dive into the StarCraft Simulator, a strategic game simulation that brings the intensity of intergalactic warfare to life. Command armies, conquer planets, and strategize your way to victory in this thrilling space adventure.

### Features

- **Modular Unit System**: Utilizes a modular system for creating and managing different units.
- **Dynamic Game Logic**: Implements dynamic game logic to handle space battles and planetary conquest.
- **Strategy Planning**: Incorporates strategic planning algorithms for intelligent decision-making.
- **Object-Oriented Design**: Demonstrates object-oriented design principles for clean and maintainable code.

### Prerequisites

- CMake (version 3.5.1 or higher)
- C++ Compiler (with C++14 support)

### How to Compile

1. Navigate to the root directory of the project.
2. Create a build directory: `mkdir build && cd build`.
3. Run CMake: `cmake ..`.
4. Build the executable: `cmake --build .`.

### How to Run

After compiling the program, run the executable from the build directory:
`./StarCraft`
Follow the on-screen instructions to command your armies and conquer planets.

### Project Structure
* src/: Contains the main program and game logic.
* CMakeLists.txt: CMake configuration file for the project.

## Warcraft Simulator

Dive into the Warcraft Simulator, a C++ project that brings fantasy worlds to life with heroes, spells, and epic battles.

### Features

- **Hero System**: Implements a versatile hero system with different types and unique abilities.
- **Spell Casting**: Enables heroes to cast basic and ultimate spells with varying mana costs.
- **Dynamic Spell Distribution**: Distributes spells among heroes with a strategic approach.
- **Object-Oriented Design**: Demonstrates object-oriented design principles for extensibility.

### Prerequisites

- CMake (version 3.5.1 or higher)
- C++ Compiler (with C++11 support)

### How to Compile

1. Navigate to the root directory of the project.
2. Create a build directory: `mkdir build && cd build`.
3. Run CMake: `cmake ..`.
4. Build the executable: `cmake --build .`.

### How to Run

After compiling the program, run the executable from the build directory:
`./Warcraft` 
Follow the on-screen instructions to command your heroes and unleash powerful spells.

### Example Input
```
Archmage 480 80 2

DeathKnight 420 70

DrawRanger 360 60

0 1
```
### Example Output
```
Archmage casted Water Elemental for 120 mana

DeathKnight casted Death Coil for 75 mana
```
<details>
  <summary>Click to see entire output</summary>

DrawRanger casted Silence for 90 mana
  
DrawRanger casted Silence for 0 mana

Archmage casted Mass Teleport for 180 mana

DeathKnight casted Animate Dead for 200 mana

DeathKnight casted Death Coil for 0 mana

DrawRanger casted Charm for 150 mana

</details>

### Project Structure

- **include/**: Contains header files.
- **src/**: Contains the main source files.
- **CMakeLists.txt**: CMake configuration file for the project.
