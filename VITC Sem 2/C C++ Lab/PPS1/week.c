#include <stdio.h>
#include <math.h>

int main() {
    char wd;
    
    printf("\nEnter first character of any day of the week: ");
    scanf("%s", &wd);
    
    // Days of the week
    switch(wd) {
        
        case 'M':
        case 'm':
        printf("Monday\n\n");
        break;

        case 'T':
        printf("Tuesday\n\n");
        break;

        case 'W':
        case 'w':
        printf("Wednesday\n\n");
        break;

        case 't':
        printf("Thursday\n\n");
        break;

        case 'F':
        case 'f':
        printf("Friday\n\n");
        break;

        case 'S':
        printf("Saturday\n\n");
        break;

        case 's':
        printf("Sunday\n\n");
        break;

        default:
        printf("\nInvalid Character.\n\n");
    }

    return 0;
}