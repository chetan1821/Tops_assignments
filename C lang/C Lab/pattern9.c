#include <stdio.h>

int main() {
    int n = 5, i, j;  // number of rows
    for (i = 0; i < n; i++) {
    	
        // left stars
        for (j = 0; j < n - i; j++) {
            printf("* ");
        }

        // middle spaces
        for (j = 0; j < 2 * i; j++) {
            printf("  ");
        }

        // right stars
        for (j = 0; j < n - i; j++) {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}

