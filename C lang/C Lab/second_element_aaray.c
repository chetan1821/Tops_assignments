#include<stdio.h>
main(){
    int a[5];
    int i, max, second;

    // Input array
    for(i=0; i<5; i++){
        printf("\n enter a[%d]= ", i);
        scanf("%d", &a[i]);
    }

    // Step 1: Find the largest element
    max = a[0];
    for(i=1; i<5; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    // Step 2: Find the second largest element
    second = -99999;  // very small number
    for(i=0; i<5; i++){
        if(a[i] != max && a[i] > second){
            second = a[i];
        }
    }

    // Display array
    for(i=0; i<5; i++){
        printf("\n a[%d] = %d", i, a[i]);
    }

    printf("\nLargest element = %d", max);
    printf("\nSecond largest element = %d", second);

}

