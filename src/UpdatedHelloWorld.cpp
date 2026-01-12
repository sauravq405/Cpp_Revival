#include <iostream>
#include "VersionHelper.hpp" // Include our custom header

/**
 * COMMANDS TO RUN:
 * 1. Compile (Include the -I flag to tell GCC where headers are):
 * g++ -static -I include src/UpdatedHelloWorld.cpp src/VersionHelper.cpp -o build/UpdatedHelloWorld.exe
 * * 2. Run:
 * build\UpdatedHelloWorld.exe
 */

int main() {
    std::cout << "Hello, World! Welcome to Cpp_Revival." << std::endl;

    // Call the function from our include file
    std::cout << "Compiler Version: " << Revival::Utils::get_gcc_version() << std::endl;

    return 0;
}