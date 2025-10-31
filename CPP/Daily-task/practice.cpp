#include <iostream>
using namespace std;
int m = 100;  
void convert() {
    int y = 10;        
    static int z = 5;   
    cout << "\nInside convert():";
    cout << "\ny = " << y;    
    cout << "\nz = " << z;    
    z++;  
}

 main() {
    int x = 20;  
    cout << "Inside main():";
    cout << "\nx = " << x;   
    cout << "\nm = " << m;  
    convert();  
    convert();  
}
