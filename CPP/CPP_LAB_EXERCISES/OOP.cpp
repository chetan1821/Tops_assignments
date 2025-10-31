#include <iostream>
using namespace std;

class Rectangle {
public:
    float length, width;

    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    float calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.getData();
    cout << "Area of Rectangle (OOP): " << rect.calculateArea() << endl;

    return 0;
}

