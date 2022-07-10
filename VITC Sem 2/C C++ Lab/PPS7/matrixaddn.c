#include <stdio.h>

// Function declaration
int n, i, j;
void matrixaddn(int m1[n][n], int m2[n][n]);

// Main function
int main() {

    printf("\nEnter a natural number 'n' for dimensions of the matrices: ");
    scanf("%d", &n);
    
    // Matrix input from user
    int m1[n][n], m2[n][n];
    printf("\nEnter elements for Matrix 1:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nEnter elements for Matrix 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    matrixaddn(m1, m2);
    printf("\n");
    return 0;
}

// Matrix Addition function
void matrixaddn(int m1[n][n], int m2[n][n]) {
        int ma[n][n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                ma[i][j] = m1[i][j] + m2[i][j];
            }
        }

        printf("\nMatrix Addition:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", ma[i][j]);
            }
            printf("\n"); 
        }
    }