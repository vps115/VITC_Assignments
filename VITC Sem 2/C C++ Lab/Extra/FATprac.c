#include <stdio.h>
#include <math.h>
#include <stdlib.h>
const int SIZE0 = 10;
const int SIZE1 = 2;
float maxm(float (*arr)[]) {
    float max = **arr;

    for (int i = 0; i < SIZE0; i++) {
        if (max < *(*arr+i))
        max = *(*arr+i);
    }

    return max;
}

void normTemp(float (*arr)[], int max) {
    int i, j;
    for (i = 0; i < SIZE0; i++) {
        *(*arr+i) /= max;
    }
}

int main() {
    int i, j;
    float arr[SIZE0][SIZE1], max;

    for(i = 0; i < SIZE0; i++) {
        for (j = 0; j < SIZE1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    max = maxm(arr);
    normTemp(arr, max);
    for (i = 0; i < SIZE0; i++) {
        printf("%f\n", *(*arr+i));
    }
}