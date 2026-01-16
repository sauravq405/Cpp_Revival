#include <iostream>

/**
 * To compile and run this program from your Cpp_Revival root:
 * *
 * 1. Create build folder:  mkdir build 2>nul
 * 2. Compile:             Windows: g++ src/DataTypes.cpp -o build/DataTypes.exe
 *                         MAC: g++ src/DataTypes.cpp -o build/DataTypes
 * OR                      Windows: g++ -static src/DataTypes.cpp -o build/DataTypes.exe (if above command fails)
 *                         MAC: g++ -static src/DataTypes.cpp -o build/DataTypes
 * 3. Run:                 Windows: build\DataTypes.exe 
 *                         MAC:         build/DataTypes
 */
int main(){
    
    //integer (whole number)
    int age = 21;
    int year = 2026;
    int days = 7.5; //only 7 is assigned

    std::cout << days << '\n'; // should print 7

    //double (numbers with decimal)
    double price = 20.99;
    double gpa = 7.5;
    double temperature = 13.25;

    std::cout << price << '\n'; //should print 20.99

    //single character
    char grade = 'A';
    char initial = 'S'; 
    char currency = '$';

    std::cout << initial << '\n'; 

    //boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = false;

    //strings (objects that represents a sequence of texts)
    std::string name = "sauravq405";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123, Fake street";

    std::cout << name << '\n'; 


    return 0;
}