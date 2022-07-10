#include <stdio.h>

int main() {
    int n, m, p, i, j, k = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter p: ");
    scanf("%d",&p);
    m = n/p;
    
    int a[n], b[m][p];
    printf("\nEnter array A: ");
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            b[i][j] = a[k];
            k++;
        }
    }

    printf("\nArray B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}