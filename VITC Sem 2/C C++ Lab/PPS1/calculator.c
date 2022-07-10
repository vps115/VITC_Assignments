#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double n1, n2;
    
    printf("\nEnter an operator (+, -, *, /): ");
    scanf("%s", &op);
    printf("Enter 2 operands: ");
    scanf("%lf %lf", &n1, &n2);

    // Calculator
    switch(op) {
        
        case '+':
        printf("\n%.1lf + %.1lf = %.1lf\n\n", n1, n2, n1 + n2);
        break;

        case '-':
        printf("\n%.1lf - %.1lf = %.1lf\n\n", n1, n2, n1 - n2);
        break;

        case '*':
        printf("\n%.1lf * %.1lf = %.1lf\n\n", n1, n2, n1 * n2);
        break;

        case '/':
        printf("\n%.1lf / %.1lf = %.1lf\n\n", n1, n2, n1 / n2);
        break;

        default:
        printf("\nError! Operator is not correct.\n\n");
    }

    return 0;
}