#include <stdio.h>

int main() {

    // Initialise variables and Read n
    int n, i, j, k, t, x, y, min;
    printf("Number of elements in the array: ");
    scanf("%d",&n);

    // Initialise array and read elements of array
    int arr[n];
    for (x = 0; x < n; x++) {
        printf("Enter element %d: ", x+1);
        scanf("%d",&arr[x]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = arr[i];
        k = i;

        for (j = i + 1; j < n; j++) {
            
            if (min > arr[j]) {
                min = arr[j];
                k = j;
            }
        }
        
        // Swap
        t = arr[i];
        arr[i] = min;
        arr[k] = t;   
    }

    // Print sorted array
    printf("Sorted Array: ");
    for (y = 0; y < n; y++) {
        printf("%d ",arr[y]);
    }
    
}