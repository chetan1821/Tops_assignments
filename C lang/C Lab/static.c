#include <stdio.h>
void counter() {
    static int count = 0;  
    int count1=0;
    count++;
    count1++;
    printf("Count = %d\n", count);
    printf("Count1 = %d\n", count1);
}

main() {
    // static keyword example
    counter();
    counter();
    counter();
    
}

