# GameHub
Explore the GameHub repository, a collection of diverse projects ranging from strategic classics like StarCraft and WarCraft to the intense Counterstrike, all the way to the vivid world of RGBTask. 

## 1. Starcraft:

- Simulates a simplified version of the Starcraft game where Terran and Protoss fleets engage in battle.
- Implements the Factory Design Pattern for creating different types of airships.
    
## 2. Warcraft:
- Implements a simulation where heroes with different abilities and spells engage in various actions.
- Demonstrates object-oriented programming concepts and usage of polymorphism.

## 3. CounterStrike:
- Simulates a simplified version of the Counter-Strike game where two players engage in a pistol round.
- Features a turn-based gameplay system with dynamic output.

## 4. RGBTask:
- Implements an algorithm to find the longest sequence of adjacent identical colors in a matrix.
- Provides both a C API and a Python version that uses the API.

# Project Structure
Each project has its own directory with the following structure:

* src/: Contains the main program files and the implementation of the core functionality.
* include/: Holds header files with declarations and definitions for the project.
* lib/: Contains any additional libraries or dependencies.
* CMakeLists.txt: Configuration file for building the project using CMake.

# 1. CounterStrike Simulator

This program simulates a simplified version of the Counter-Strike game where two players engage in a pistol round. Each player has a choice between two types of pistols: Glock and Desert Eagle. The players take turns shooting at each other until one of them runs out of health and armor.

## Table of Contents

- [CS-Features](#CS-features)
- [CS-Prerequisites](#prerequisites)
- [CS-How to Compile](#how-to-compile)
- [CS-How to Run](#how-to-run)
- [Example Input](#example-input)
- [Example Output](#example-output)
- [Project Structure](#project-structure)

## Features

- **Player System**: Players have vital data such as health and armor.
- **Pistol Types**: Two types of pistols are available: Glock and Desert Eagle.
- **Turn-Based Gameplay**: Players take turns shooting at each other.
- **Dynamic Output**: The program provides real-time feedback on each player's turn.

## Prerequisites

- CMake (version 3.5.1 or higher)
- C++ Compiler (with C++14 support)

## How to Compile

1. Navigate to the root directory of the project.
2. Create a build directory: `mkdir build && cd build`.
3. Run CMake: `cmake ..`.
4. Build the executable: `cmake --build .`.

## How to Run

After compiling the program, run the executable from the build directory:

`./CounterStrike`

Follow the on-screen instructions to input player details and choose pistols.

## Example Input
```
100 50     // Player One's health and armor
80 30      // Player Two's health and armor
0 25 12 50 // Player One buys Glock with damage 25, clip size 12, and 50 remaining ammo
1 30 7 35  // Player Two buys Desert Eagle with damage 30, clip size 7, and 35 remaining ammo
```
## Example Output
```
PlayerID 0 turn:
Player 0 shoots Player 1. Player 1's health: 70, armor: 30.

PlayerID 1 turn:
Player 1 shoots Player 0. Player 0's health: 75, armor: 25.```
```

# Project Structure
- Pistols/: Contains the pistol classes and the factory for creating pistols.
- src/: Contains the main program and player class.
- CMakeLists.txt: CMake configuration file for the project.

Starcraft Battle Simulator
Welcome to the Starcraft Battle Simulator, a console-based game where the Terran and Protoss fleets engage in epic space battles!

Table of Contents
Features
Prerequisites
How to Compile
How to Run
Example Input
Example Output
Project Structure
Design Patterns Used
License
Features
Airship Types: BattleCruser, Carrier, Viking, Phoenix.
Turn-Based Gameplay: Watch the fleets clash in a turn-based battle.
Dynamic Output: Real-time feedback on each airship's actions.
Fleet Composition: Customize the composition of your Terran and Protoss fleets.
Prerequisites
CMake (version 3.5.1 or higher)
C++ Compiler (with C++11 support)
How to Compile
Navigate to the root directory of the project.
Create a build directory: mkdir build && cd build.
Run CMake: cmake ...
Build the executable: cmake --build ..
How to Run
After compiling the program, run the executable from the build directory:

bash
Copy code
./Starcraft
Follow the on-screen instructions to input fleet compositions and watch the battle unfold.

Example Input
plaintext
Copy code
Enter Terran Fleet Composition: BCV
Enter Protoss Fleet Composition: PPH
Example Output
plaintext
Copy code
Terran BattleCruser attacks Protoss Phoenix.
Protoss Phoenix takes 20 damage. Shield: 70, Health: 70.

...

Project Structure
src/: Contains the main program and individual classes for airships.
CMakeLists.txt: CMake configuration file for the project.

