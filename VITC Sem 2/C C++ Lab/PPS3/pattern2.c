#include <stdio.h>

int main() {
    int i, j;
    printf("\n");
    
    //Pattern
    for (i = 10; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}