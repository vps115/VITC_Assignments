#include <stdio.h>

int main() {
    int n, n1, i, sum = 0;
    float avg;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    // Sum and average of first n natural numbers
    for (i = 1; i <= n; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &n1);
        sum += n1;
    }
    avg = (float) sum / n;
    
    printf("\nSum of numbers is: %d\n", sum);
    printf("Average of numbers is: %.2f\n\n", avg);

    return 0;
}