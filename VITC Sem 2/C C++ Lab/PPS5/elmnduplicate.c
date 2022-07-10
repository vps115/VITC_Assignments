#include <stdio.h>

int main() {

    // Initialise variables and Read n
    int n, i, j, k = 0, x, y, add;
    printf("Number of elements in the array: ");
    scanf("%d",&n);

    // Initialise array and read elements of array
    int arr[n], arr1[n];
    for (x = 0; x < n; x++) {
        printf("Enter element %d: ", x+1);
        scanf("%d",&arr[x]);
    }


    // Store unique elements from original array in new array
    arr1[0] = arr[0]; //1
    k = 1;
    for (i = 0; i < n; i++) {
        add = 1;
        
        for (j = 0; j < k; j++) {
            if (arr[i] == arr1[j]) {
                add = 0;
            }
        }

        if (add) {
            arr1[k] = arr[i];
            k = k + 1;
        }

    }

    // Print array with no duplicate elements
    printf("Final Array: ");
    for (y = 0; y < k; y++) {
        printf("%d ",arr1[y]);
    }
    
}