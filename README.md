# Cpp_Revival

## Create the output folder if you haven't
mkdir build

## Compile from src to build
g++ src/HelloWorld.cpp -o build/HelloWorld.exe

## Run it
build\HelloWorld.exe

## Day 1 (learnings)

Learned the "Triple Threat" of C++ compilation:

Multiple Source Files: Compiling both your main logic and your helper.

Include Paths: Using -I to tell the compiler where your header "contracts" are located.

Static Linking: Using -static to bundle dependencies and avoid DLL errors.
