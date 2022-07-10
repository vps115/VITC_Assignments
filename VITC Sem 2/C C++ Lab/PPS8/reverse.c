#include <stdio.h>

void reverse(void);

int main() {
    reverse();
    return 0;
}

void reverse(void) {
    int n, i;
    printf("\nEnter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], mid = n/2, rev[n];
    printf("Enter elements of the array: ");
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < mid; i++) {
        rev[mid - i - 1] = arr[i];
    }

    if (n % 2 != 0) {
        rev[mid] = arr[mid];
        for (i = 0; i < mid; i++) {
            rev[n - i - 1] = arr[mid + i + 1];
        }
    }
    else {
        for (i = 0; i < mid; i++) {
            rev[n - i - 1] = arr[mid + i];
        }
    }
    
    printf("\nRequired Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n\n");
}