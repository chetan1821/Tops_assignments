#include<stdio.h>
int main(){
    int a[5], even[5];   // original + even array
    int i, j = 0;        // j will count even numbers

    // Input loop
    for(i=0; i<5; i++){
        printf("\n enter a[%d]= ", i);
        scanf("%d", &a[i]);

        // If number is even, store it in even[]
        if(a[i] % 2 == 0){
            even[j] = a[i];
            j++;
        }
    }

    // Print original array
    printf("\nOriginal Array:");
    for(i=0; i<5; i++){
        printf("\n a[%d] = %d", i, a[i]);
    }

    // Print even array
    printf("\n\nEven Numbers Array:");
    for(i=0; i<j; i++){
        printf("\n even[%d] = %d", i, even[i]);
    }

    return 0;
}


