#include <iostream>
using namespace std;


/**
 * To compile and run this program from your Cpp_Revival root:
 * *
 * 1. Create build folder:  mkdir build 2>nul
 * 2. Compile:             Windows: g++ app/MenuApp.cpp -o build/MenuApp.exe
 *                         MAC: g++ app/MenuApp.cpp -o build/MenuApp
 * OR                      Windows: g++ -static app/MenuApp.cpp -o build/MenuApp.exe (if above command fails)
 *                         MAC: g++ -static app/MenuApp.cpp -o build/MenuApp
 * 3. Run:                 Windows: build\MenuApp.exe 
 *                         MAC:         build/MenuApp
 */

int main() {
    int choice;

    while (true) {
        cout << "\n=== Simple Console Menu ===\n";
        cout << "1. Say Hello\n";
        cout << "2. Add two numbers\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello, welcome to C++!\n";
        }
        else if (choice == 2) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum = " << (a + b) << "\n";
        }
        else if (choice == 3) {
            cout << "Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
