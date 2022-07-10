#include <stdio.h>

int main() {
    // Initialising variables and read n
    int n, i, min, max;
    printf("\nNumber of elements to be stored in the array: ");
    scanf("%d", &n);

    // Initialising array and store numbers in array using loop
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Finding minimum and maximum element in the current array
        if (i == 0) {
            min = arr[0];
            max = arr[0];
        }
        else if (arr[i] < min)
        min = arr[i];
        else if (arr[i] > max)
        max = arr[i];
    }

    // Display minimum and maximum element in the array
    printf("\nMinimum element is %d\n", min);
    printf("Maximum element is %d\n\n", max);

    return 0;
}