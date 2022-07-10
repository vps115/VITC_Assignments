#include <stdio.h>

// Function declaration
int square(int n);

// Main function
int main() {
    int n, r;
    printf("\nEnter an integer: ");
    scanf("%d", &n);

    r = square(n);
    printf("Square of %d is %d\n\n", n, r);
    return 0;
}

// Square function
int square(int n) {
        return n*n;
    }