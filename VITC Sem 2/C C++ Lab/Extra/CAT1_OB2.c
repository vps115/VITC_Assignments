#include <stdio.h>

int ly (int y);

int main() {
    int by, py, b = 0;

    printf("\nEnter Birth Year: ");
    scanf("%d", &by);
    printf("Enter Present Year: ");
    scanf("%d", &py);

    if (ly(by)) {
        while (by<=py) {
            by+=4;
            b+=1;
        }
        printf("\nBirthdays: %d\n\n", b);
    }
    else {
        printf("\nIncorrect Birth Year\n\n");
    }
    return 0;
}

int ly (int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    return 1;
    return 0;
}