#include<iostream>
using namespace std;

template <typename T>
class Sortarray {
    T a[5], temp;
    int i, j;  
public:
    Sortarray() {
        for (i = 0; i < 5; i++) {
            cout << "Enter array element " << i+1 << " = ";
            cin >> a[i];
        }
    }

    void sorting() {
        for (i = 0; i < 5; i++) {
            for (j = i + 1; j < 5; j++) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    void display() {
        cout << "\nSorted Array: ";
        for (i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

 main() {
    cout << "\nSorting Integer Array:\n";
    Sortarray<int> s1;
    s1.sorting();
    s1.display();

    cout << "\nSorting Character Array:\n";
    Sortarray<char> s2;
    s2.sorting();
    s2.display();

}

