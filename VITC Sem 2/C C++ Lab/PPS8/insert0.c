#include <stdio.h>

void insert0(void);

int main() {
    insert0();
    return 0;
}

void insert0(void) {
    int n, i, x;
    printf("\nEnter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter elements of the array: ");
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be inserted at index 0: ");
    scanf("%d", &x);
    n++;

    for(i = n - 1; i > - 1; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = x;

    printf("\nRequired Array: ");
    for (i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}