# LC-3 Virtual Machine (C Implementation)

## Overview

This project implements a **LC-3 Virtual Machine** in C. The LC-3 (Little Computer 3) is a simple educational computer architecture designed to teach assembly language programming. The virtual machine simulates the execution of LC-3 machine code on a software level, allowing users to load and run LC-3 programs.

## Features

- **Memory Simulation**: Simulates the LC-3's memory with the ability to load programs into memory.
- **Instruction Execution**: Implements the basic instructions of the LC-3 architecture.
- **Input/Output**: Supports basic input and output operations using the LC-3 console.
- **Debugging**: Option to print the state of the virtual machine for debugging purposes.

## Getting Started

### Prerequisites

To build and run the LC-3 virtual machine, you'll need:

- A **C** compiler (e.g., `gcc`)
- Basic knowledge of the LC-3 architecture and assembly language
- Git bash

### Installation

1. Clone the repository & cd into the folder:

   ```bash
   git clone https://github.com/jp-ack/vm.git
   cd vm

### Compiling 

2. Compile The source code
   -This will create an executable file (vm.exe) within your vm folder.
   ```bash
   gcc vm.c -0 -vm

3. Unix Mis-match (See Step 4)
   ```bash
   $ ./a C:\Users\your_name\vm\rogue.obj will NOT fly 

4. Proper path format
   Must be forward all forward slashes "/"   
   ```bash
   $ ./a /c/Users/your_name/vm/rogue.obj

