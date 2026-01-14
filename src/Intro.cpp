#include <iostream>

/**
 * To compile and run this program from your Cpp_Revival root:
 * *
 * 1. Create build folder:  mkdir build 2>nul
 * 2. Compile:             Windows: g++ src/Intro.cpp -o build/Intro.exe
 *                         MAC: g++ src/Intro.cpp -o build/Intro
 * OR                      Windows: g++ -static src/Intro.cpp -o build/Intro.exe (if above command fails)
 *                         MAC: g++ -static src/Intro.cpp -o build/Intro
 * 3. Run:                 Windows: build\Intro.exe 
 *                         MAC:         build/Intro
 */
int main()
{

    //This is a comment
    
    /*
    This is a
    multi-line comment
    */

    std::cout << "I like pizza." << std::endl;
    std::cout << "They are awesome." << std::endl;
    std::cout << "That's it!" << '\n'; //'\n' will work same as std::endl

    return 0;
}