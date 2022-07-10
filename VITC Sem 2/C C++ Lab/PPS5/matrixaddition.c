#include <stdio.h>

int main() {

    // Initialise variables and Read n
    int n, i, j;
    printf("Number of rows and columns for matrix: ");
    scanf("%d",&n);

    // Read and display elements of matrix A and B
    int a[n][n], b[n][n];
    
    printf("Enter value for matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter value for matrix B: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    //Matrix Addition
    int ma[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            ma[i][j] = a[i][j] + b[i][j];
        }
    }

    //Display Matrix Addition
    printf("\nMatrix Addition of Matrix A and Matrix B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", ma[i][j]);
        }
        printf("\n");
    }
}