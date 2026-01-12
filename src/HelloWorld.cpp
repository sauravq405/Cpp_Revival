#include <iostream>

/**
 * To compile and run this program from your Cpp_Revival root:
 * * 
 * 1. Create build folder:  mkdir build 2>nul
 * 2. Compile:             g++ src/HelloWorld.cpp -o build/HelloWorld.exe
 * 3. Run:                 build\HelloWorld.exe
 */

int main() {
    // Standard Hello World
    std::cout << "Hello, World! Welcome to Cpp_Revival." << std::endl;

    // Printing GCC Version using predefined macros
    std::cout << "Compiler: GCC " 
              << __GNUC__ << "." 
              << __GNUC_MINOR__ << "." 
              << __GNUC_PATCHLEVEL__ << std::endl;

    return 0;
}