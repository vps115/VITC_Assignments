#include <stdio.h>
#include <string.h>

int main() {
    // Initialise variables and read number as string
    char n[10], r[10];
    int i;
    printf("\nEnter an integer: ");
    gets(r);

    // Copy, reverse and compare
    strcpy(n,r);
    strrev(r);
    i = strcmp(n,r);
    
    // Check whether number is palindrome or not
    if (i) {
        printf("%s is not a palindrome\n\n", n);
    }
    else {
        printf("%s is a palindrome\n\n", n);
    }

    return 0;
}