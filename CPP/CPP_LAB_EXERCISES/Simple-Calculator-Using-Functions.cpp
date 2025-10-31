#include <iostream>
using namespace std;

// Function declarations
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if (b == 0)
        cout << "Error! Division by zero." << endl;
    else
        return a / b;
    return 0;
}

 main() {
    float num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nChoose operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2);
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2);
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2);
            break;
        case 4:
            cout << "Result: " << divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }

    
}

