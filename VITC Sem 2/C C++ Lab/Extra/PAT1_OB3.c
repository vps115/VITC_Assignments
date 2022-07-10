#include <stdio.h>

int main() {

    int n, i, j, k, t, x, y, min;
    scanf("%d",&n);

    int arr[n];
    for (x = 0; x < n; x++) {
        scanf("%d",&arr[x]);
    }

    for (i = 0; i < n - 1; i++) {
        min = arr[i];
        k = i;

        for (j = i + 1; j < n; j++) {
            
            if (min > arr[j]) {
                min = arr[j];
                k = j;
            }
        }
        
        t = arr[i];
        arr[i] = min;
        arr[k] = t;   
    }

    for (y = 0; y < n; y++) {
        printf("%d ",arr[y]);
    }
    
}