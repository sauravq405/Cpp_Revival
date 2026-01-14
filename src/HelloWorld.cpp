#include <iostream>

/**
 * To compile and run this program from your Cpp_Revival root:
 * *
 * 1. Create build folder:  mkdir build 2>nul
 * 2. Compile:             Windows: g++ src/HelloWorld.cpp -o build/HelloWorld.exe
 *                         MAC: g++ src/HelloWorld.cpp -o build/HelloWorld
 * OR                      Windows: g++ -static src/HelloWorld.cpp -o build/HelloWorld.exe (if above command fails)
 *                         MAC: g++ -static src/HelloWorld.cpp -o build/HelloWorld
 * 3. Run:                 Windows: build\HelloWorld.exe 
 *                         MAC:         build/HelloWorld
 */

int main()
{
    // Standard Hello World
    std::cout << "Hello, World! Welcome to Cpp_Revival." << std::endl;

    // Printing GCC Version using predefined macros
    std::cout << "Compiler: GCC "
              << __GNUC__ << "."
              << __GNUC_MINOR__ << "."
              << __GNUC_PATCHLEVEL__ << std::endl;

    return 0;
}