#include <iostream>
using namespace std;

 main() {
    int num;

    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    cout << "Multiplication Table of " << num << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

}

