#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2, realPart, imagPart;
    printf("\nCoefficients a, b and c are: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = pow(b,2) - 4 * a * c;

    // Real and distinct roots
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\nQuadratic Equation has real and distinct roots:\n");
        printf("Root 1 = %.2lf and Root 2 = %.2lf\n\n", r1, r2);
    }

    // Real and equal roots
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("\nQuadratic Equation has real and equal roots:\n");
        printf("Root 1 = Root 2 = %.2lf\n\n", r1);
    }

    // Imaginary roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
         printf("\nQuadratic Equation has imaginary roots:\n");
        printf("Root 1 = %.2lf + %.2lfi and Root 2 = %.2f - %.2fi\n\n", 
        realPart, imagPart, realPart, imagPart);
    }

    return 0;
}