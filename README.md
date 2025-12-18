# CANBusSimulator

A basic **CAN bus simulator** written in C++ for educational and testing purposes.

---

## 📖 Project Overview
CANBusSimulator provides a simple environment to simulate communication over a Controller Area Network (CAN) bus without requiring physical hardware.
As default, it randomly generates 99 frames and displays some statistics from these generated frames.

---

## 📂 Repository Structure
- **`src/`** – main source files
- **`include/`** – header files
- **`main.cpp`** – program entry point
- **`CMakeLists.txt`** – build configuration for CMake
- **`.gitignore`** – ignores temporary and build artifacts

---

## ⚙️ Requirements
- C++11 or newer (tested with `g++`)
- [CMake](https://cmake.org/) - 3.10+
- Tested on Linux and Windows

---

## 🚀 Building the Project
1. Clone the repository:
   ```bash
   git clone https://github.com/dnlwil/CANBusSimulator.git
   cd CANBusSimulator
   
2. Create a build directory and run CMake:
   ```bash
   mkdir build
   cd build
   cmake -G "MinGW Makefiles" ..
   mingw32-make

3. Run the simulator:
   ```bash
   ./CANBusSimulator
