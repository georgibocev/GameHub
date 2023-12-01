# GameHub
Explore the GameHub repository, a collection of diverse projects ranging from strategic classics like StarCraft and WarCraft to the intense Counterstrike, all the way to the vivid world of RGBTask. 

## Table of Contents

- [RGBTask](#rgbtask)
  - [Features](#features)
  - [Prerequisites](#prerequisites)
  - [How to Compile](#how-to-compile)
  - [How to Run](#how-to-run)
  - [Project Structure](#project-structure)
  - [Algorithm Details](#algorithm-details)
  - [C API](#c-api)
  - [Example Input](#example-input)
  - [Example Output](#example-output)
  - [Python Integration](#python-integration)

- [Starcraft](#starcraft)
  - [Features](#features)
  - [Prerequisites](#prerequisites)
  - [How to Compile](#how-to-compile)
  - [How to Run](#how-to-run)
  - [Example Input](#example-input)
  - [Example Output](#example-output)
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

### Example Input
```
3 3
R R B
G G R
R B G
```

### Example Output

`2`

### Project Structure
- **include/**: Contains header files.
- **src/**: Contains the main source files.
- **lib/**: Contains the C API implementation.
- **CMakeLists.txt**: CMake configuration file for the project.
  
## StarCraft

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

### Example Input
```
vv
pp
```

### Example Output
```
Last Protoss AirShip with ID: 1 has 90 health and 30 shield left
  
Last Terran AirShip with ID: 1 has 110 health left
```
<details>
  <summary>Click to see entire output</summary>

Last Protoss AirShip with ID: 1 has 80 health and 0 shield left
  
Last Terran AirShip with ID: 1 has 70 health left
  
Last Protoss AirShip with ID: 1 has 40 health and 0 shield left
  
Last Terran AirShip with ID: 1 has 30 health left
  
Viking with ID: 1 killed enemy airship with ID: 1
  
Last Protoss AirShip with ID: 0 has 90 health and 90 shield left
  
Last Terran AirShip with ID: 1 has 10 health left
  
Last Protoss AirShip with ID: 0 has 90 health and 30 shield left
  
Phoenix with ID: 0 killed enemy airship with ID: 1
  
Last Terran AirShip with ID: 0 has 150 health left
  
Last Protoss AirShip with ID: 0 has 90 health and 20 shield left
  
Last Terran AirShip with ID: 0 has 130 health left
  
Last Protoss AirShip with ID: 0 has 90 health and 10 shield left
  
Last Terran AirShip with ID: 0 has 110 health left
  
Last Protoss AirShip with ID: 0 has 90 health and 0 shield left
  
Last Terran AirShip with ID: 0 has 90 health left
  
Last Protoss AirShip with ID: 0 has 80 health and 0 shield left
  
Last Terran AirShip with ID: 0 has 70 health left
  
Last Protoss AirShip with ID: 0 has 70 health and 0 shield left
  
Last Terran AirShip with ID: 0 has 50 health left
  
Last Protoss AirShip with ID: 0 has 60 health and 0 shield left
  
Last Terran AirShip with ID: 0 has 30 health left
  
Last Protoss AirShip with ID: 0 has 50 health and 0 shield left
  
Last Terran AirShip with ID: 0 has 10 health left
  
Last Protoss AirShip with ID: 0 has 40 health and 0 shield left
  
Phoenix with ID: 0 killed enemy airship with ID: 0
  
PROTOSS has won!

</details>

### Project Structure
- **include/**: Contains header files.
- **src/**: Contains the main source files.
- **CMakeLists.txt**: CMake configuration file for the project.

## Warcraft

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

## CounterStrike
Dive into the CounterStrike Simulator, a detailed simulation of a pistol round in the iconic Counter-Strike game. This project is designed to showcase various technical features of game simulation.

### Features

- **Player System with Attributes**: Experience a sophisticated player system that includes health and armor attributes. This involves the implementation of object-oriented design principles for efficient representation and manipulation of player data.
- **Weapon Customization and Statistics**: Explore the intricacies of weapon choices with customizable attributes. This includes detailed statistics for each weapon, such as damage, clip size, and remaining ammunition. The project utilizes data structures and algorithms to manage weapon properties.
- **Turn-Based Gameplay Logic**: Immerse yourself in the technical intricacies of turn-based gameplay. The simulator employs algorithmic approaches to handle player turns, calculate damage, and update player states. This involves the implementation of game logic to ensure a seamless and realistic gaming experience.
- **Dynamic Output Handling**: Witness real-time feedback on each player's turn through a dynamically updated output system. This feature utilizes efficient output handling mechanisms to display game events and player interactions in a clear and organized manner.

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
`./CounterStrike`
Follow the on-screen technical instructions to input player details and choose pistols.

### Example Input

```
100 0
120 0
0 8 9 71
1 24 7 35
```
### Example Output

```
PlayerID 0 turn:
Enemy left with: 112 health and 0 armor
Enemy left with: 104 health and 0 armor
```
<details>
  <summary>Click to see entire output</summary>
Enemy left with: 96 health and 0 armor

PlayerID 1 turn:
Enemy left with: 76 health and 0 armor

PlayerID 0 turn:
Enemy left with: 88 health and 0 armor
Enemy left with: 80 health and 0 armor
Enemy left with: 72 health and 0 armor

PlayerID 1 turn:
Enemy left with: 52 health and 0 armor

PlayerID 0 turn:
Enemy left with: 64 health and 0 armor
Enemy left with: 56 health and 0 armor
Enemy left with: 48 health and 0 armor

PlayerID 1 turn:
Enemy left with: 28 health and 0 armor

PlayerID 0 turn:
Reloading...
currClipBullets: 9, remainingAmmo: 62

PlayerID 1 turn:
Enemy left with: 4 health and 0 armor

PlayerID 0 turn:
Enemy left with: 40 health and 0 armor
Enemy left with: 32 health and 0 armor
Enemy left with: 24 health and 0 armor

PlayerID 1 turn:
Enemy left with: -20 health and 0 armor

Player with ID: 1 wins!
<details>

### Project Structure

- **include/**: Contains header files.
- **src/**: Contains the main source files.
- **CMakeLists.txt**: CMake configuration file for the project.

## Parent CMake Configuration

The parent CMakeLists.txt file includes configuration settings and options for building all projects within the GameHub repository.

### Features

- **Centralized Configuration**: Provides a centralized CMake configuration for all projects.
- **Project Organization**: Defines the organization of projects within the repository.
- **Common Dependencies**: Manages common dependencies and settings for all projects.

### How to Use

To build all projects, follow these steps:

1. Navigate to the root directory of the GameHub repository.
2. Create a build directory: `mkdir build && cd build`.
3. Run CMake: `cmake ..`.
4. Build all projects: `cmake --build .`.

This will build all projects in the repository, and you can then run each project individually.
