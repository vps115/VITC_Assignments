#include <stdio.h>

int arearect (int l, int b, int n);

int main() {
    int l, b, n;

    printf("\nNumber of Rectangles: ");
    scanf("%d", &n);
    printf("Length of Innermost Rectangle: ");
    scanf("%d", &l);
    printf("Breadth of Outermost Rectangle: ");
    scanf("%d", &b);
    
    printf("\nArea of Outermost Reactangle: %d sq. units\n\n", arearect(l, b, n));

    return 0;
}

int arearect (int l, int b, int n) {
    if (n==1)
    return l*b;
    return arearect(l+1,b+1,n-1);
}