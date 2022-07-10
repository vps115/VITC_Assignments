#include <stdio.h>

void insert(void);

int main() {
    insert();
    return 0;
}

void insert(void) {
    int n, i, x, p;
    printf("\nEnter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter elements of the array: ");
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter position where the element is to be inserted: ");
    scanf("%d", &p);
    printf("Enter element to be inserted at position p: ");
    scanf("%d", &x);
    n++;

    for(i = n - 1; i > p - 1; i--) {
        arr[i] = arr[i-1];
    }
    arr[p - 1] = x;

    printf("\nRequired Array: ");
    for (i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}