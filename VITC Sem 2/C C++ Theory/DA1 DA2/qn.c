#include <stdio.h>

int main () {
    int arrayVal[]={5,8,12,14,18,19};
    int *pointerVal=(int*)(&arrayVal+1);
    printf("%d", *(pointerVal-4));
    return 0;

}