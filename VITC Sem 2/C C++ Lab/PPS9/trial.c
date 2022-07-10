#include <stdio.h>

int main() {
    int a[] = {4,5,6,7,8};
    int *b;

    b = a;
    b = b+2;
    printf("%d",*b);
    return 0;
}