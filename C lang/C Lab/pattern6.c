#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 7; j++) {
            if (i == 1 || i == 7) {           // Top and bottom line
                if (j > 1) 
                    printf("* ");
                else
                    printf("  ");
            }
            else if (j == 1) {                // Left side vertical
                if (i != 1 && i != 7)
                    printf("* ");
                else
                    printf("  ");
            }
            else {
                printf("  ");                 // Empty space
            }
        }
        printf("\n");
    }
    return 0;
}

