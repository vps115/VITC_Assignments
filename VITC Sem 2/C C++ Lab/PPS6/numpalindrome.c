#include <stdio.h>

int main() {
    // Initialise variables and read number
    int n, r = 0, n1;
    printf("\nEnter an integer: ");
    scanf("%d", &n);
    n1 = n;

    // Reverse the number
    while(n1 > 0) {
        r = r * 10 + (n1 % 10);
        n1 = n1 / 10; 
    }

    // Check if input number is equal to reversed number
    if (n == r) {
        printf("%d is a palindrome\n\n", n);
    }
    else {
        printf("%d is not a palindrome\n\n", n);
    }

    return 0;
}