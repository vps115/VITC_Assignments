#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Initialise variables and read n
    int n, i, j, count = 0;
    char reverse[15], name[15];
    printf("\nEnter number of names: ");
    scanf("%d", &n);

    // Initialise array and read names
    char *names[n];
    printf("Enter names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", &name);
        
        // Check for palindromes and store them in an array
        strcpy(reverse, name);
        strrev(reverse);
        j = strcmp(name, reverse);
        if (!j) {
            names[count] = malloc(15*sizeof(char));
            strcpy(names[count], name);
            count++;
        }
    }
    
    // Display list of palindromic names
    if (count != 0) {
        printf("\nList of palindromic names:\n");
        for (i = 0; i < count; i++) {
            printf("%s\n", names[i]);
            }
    }
    
    // Print number of palindromic names
    printf("\nNumber of palindromic names: %d\n\n", count);

    return 0;
}