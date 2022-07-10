#include <stdio.h>

int main() {
    // Initialising variables and read n
    int n, i, e = 0, o = 0;
    printf("\nNumber of elements to be stored in the array: ");
    scanf("%d", &n);

    // Initialising array and store numbers in array using loop
    int arr[n], even[n], odd[n];
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Store even and odd elements in their respective array
        if (arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        }
        else {
            odd[o] = arr[i];
            o++;
        }
    }

    // Display odd and even elements in the array
    printf("\nThe EVEN elements are:\n");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nThe ODD elements are:\n");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n\n");
    return 0;
}