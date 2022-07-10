#include <stdio.h>

int main() {
    // Initialise variables and read n
    int n, i, j;
    printf("\nEnter an integer: ");
    scanf("%d", &n);

    // Pattern
    printf("\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}