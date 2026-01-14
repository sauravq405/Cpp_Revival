#include <iostream>

/**
 * To compile and run this program from your Cpp_Revival root:
 * *
 * 1. Create build folder:  mkdir build 2>nul
 * 2. Compile:             Windows: g++ src/Variables.cpp -o build/Variables.exe
 *                         MAC: g++ src/Variables.cpp -o build/Variables
 * OR                      Windows: g++ -static src/Variables.cpp -o build/Variables.exe (if above command fails)
 *                         MAC: g++ -static src/Variables.cpp -o build/Variables
 * 3. Run:                 Windows: build\Variables.exe 
 *                         MAC:         build/Variables
 */
int main(){
    int x; //declaration
    x = 10; //assignment
    int y = 20;
    int sum = x + y;

    std::cout << x << '\n'; //usage
    std::cout << y << '\n'; 
    std::cout << sum << '\n'; 

    return 0;
}