#include <stdio.h>

int add(void);
int multiply(void);
int reverse (void);

int main() {
    char op;
    printf("\nEnter an operator (+/*/$): ");
    scanf("%c", &op);
    
    switch (op) {
        
        case '+':
            printf("Sum of 2 numbers is %d\n\n", add());
            break;
        case '*':
            printf("Product of 2 numbers is %d\n\n", multiply());
            break;
        case '$':
            printf("Reverse of the number is %d\n\n", reverse());
            break;
        default:
            printf("Enter a valid operator.\n\n");
            break;
    }

    return 0;
}

int add(void) {
    int a, b, sum;
    printf("\nEnter 2 numbers to be added: ");
    scanf("%d", &a);
    scanf("%d", &b);

    sum = a + b;
    return sum;
}

int multiply(void) {
    int a, b, prod = 1;
    printf("\nEnter 2 numbers to be multiplied: ");
    scanf("%d", &a);
    scanf("%d", &b);

    prod = a * b;
    return prod;
}

int reverse(void) {
    int a, rev = 0;
    printf("\nEnter a number to be reversed: ");
    scanf("%d", &a);
    
    while (a > 0) {
        rev = rev * 10 + a % 10;
        a /= 10;
    }
    return rev;
}