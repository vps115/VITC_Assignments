#include <stdio.h>

// Function declaration
int factorial(int n);

// Main function
int main() {
    int n, r;
    printf("\nEnter a natural number: ");
    scanf("%d", &n);

    r = factorial(n);
    printf("Factorial of %d is %d\n\n", n, r);
    return 0;
}

//Factorial function (Recusrsion)
int factorial(int n) {
        if (n == 0 || n == 1)
        return 1;
        else
        return n*factorial(n-1);
    }

/*Factorial function (Iteration)
int factorial(int n) {
    int f = 1, i;
    for(i = 1; i<=n; i++) {
        f *= i;
    }
    return f; 
} */