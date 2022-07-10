#include <stdio.h>

int main() {
    // Initialise variables and read number
    int n, i, p = 0, ne = 0, z = 0, o = 0, e = 0;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    // Initialise array and store numbers in the array
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Classify numbers
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
        p++;
        if (arr[i] < 0)
        ne++;
        if (arr[i] == 0)
        z++;
        if (arr[i] % 2 != 0)
        o++;
        if (arr[i] % 2 == 0)
        e++;
    }

    // Display classification count
    printf("\nPositive Numbers: %d\n", p);
    printf("Negative Numbers: %d\n", ne);
    printf("Zeroes: %d\n", z);
    printf("Odd Numbers: %d\n", o);
    printf("Even Numbers: %d\n\n", p);

    return 0;
}