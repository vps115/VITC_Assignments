#include <stdio.h>
int x;
int* insert(int arr[x+1], int n, int p, int x);

int main() {
    int x, n, p, i;

    printf("\nNumber of elements: ");
    scanf("%d", &x);
    printf("Element to be added: ");
    scanf("%d", &n);
    printf("Index of new element: ");
    scanf("%d", &p);

    int array[x+1];
    printf("\nEnter array elements: ");
    for (i = 0; i < x; i++) {
        scanf("%d", &array[i]);
    }
    
    int *ptr;
    int* (*insertptr)(int [], int, int, int) = &insert;
    ptr = (*insertptr)(array, n, p, x);
    
    printf("\nNew Array: ");
    for (i = 0; i < x + 1; i++) {
        printf("%d ", *(ptr+i));
    }
    printf("\n\n");
    
    return 0;
}

int* insert(int arr[x+1], int n, int p, int x) {
    int i;
    
    for (i = x; i > p; i--) {
        arr[i] = arr[i-1];
    }
    arr[p] = n;

    return arr;
}