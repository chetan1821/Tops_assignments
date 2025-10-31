#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable

void display() {
    int localVar = 50;  // Local variable
    cout << "Inside function: " << endl;
    cout << "Local variable = " << localVar << endl;
    cout << "Global variable = " << globalVar << endl;
}

 main() {
    int localVar = 10;  // Local variable for main function

    cout << "Inside main: " << endl;
    cout << "Local variable = " << localVar << endl;
    cout << "Global variable = " << globalVar << endl;

    display();
}

