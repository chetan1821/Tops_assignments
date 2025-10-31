#include <iostream>
using namespace std;

 main() {
    int a = 10;
    float b = 3.5;

    // Implicit Type Conversion
    float result1 = a + b; // int 'a' is automatically converted to float

    // Explicit Type Conversion (Type Casting)
    int result2 = (int)b + a; // float 'b' is manually converted to int

    cout << "Implicit Type Conversion Result: " << result1 << endl;
    cout << "Explicit Type Conversion Result: " << result2 << endl;

}

