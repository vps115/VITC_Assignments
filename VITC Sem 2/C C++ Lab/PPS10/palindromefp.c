#include <stdio.h>
#include <string.h>

int palindrome(char name[15]);

int main() {
    char name[15];
    printf("\nEnter name: ");
    scanf("%s", &name);
    
    int result;
    int (*palindromeptr)(char []) = &palindrome;
    result = (*palindromeptr)(name);

    if (!result)
    printf("Palindrome\n\n");
    else
    printf("Not a Palindrome\n\n");

    return 0;
}

int palindrome(char name[15]) {
    char revname[15]; 
    int result;

    strcpy(revname, name);
    strrev(revname);
    result = strcmp(name, revname);

    return result;
}