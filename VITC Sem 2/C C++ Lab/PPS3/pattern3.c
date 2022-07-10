#include <stdio.h>

int main() {
    int i, j, n = 9;
    printf("\n");
    
    //Upper Triangle
    for (i = 1; i <= n; i = i + 2) {
        for (j = 0; j < (n-i)/2; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("*");
        }

        for (j = 0; j < (n-i)/2; j++) {
            printf(" ");
        }
        
        printf("\n");
    }
    
    //Lower Triangle
    for (i = n - 2; i > 0; i = i - 2) {
        for (j = 0; j < (n-i)/2; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("*");
        }

        for (j = 0; j < (n-i)/2; j++) {
            printf(" ");
        }
        
        printf("\n");
    }

    printf("\n");
    return 0;
}