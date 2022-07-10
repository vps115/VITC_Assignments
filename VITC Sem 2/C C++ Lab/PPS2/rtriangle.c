#include <stdio.h>

int main() {
    int h, i, j;
    printf("\nEnter Height of right triangle: ");
    scanf("%d", &h);

    // Right triangle of height 'h' using '*'
    printf("\n");
    for (i = 0; i < h; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}