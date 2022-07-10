//QUEUE DATA STRUCTURE
#include <stdio.h>
#include <stdlib.h>

char arr[4][7];
int r = 0, f = 0;

void insertn();
char* removen(void);

int main() {
    int i;
    char *n;

    for (i = 0; i < 4; i++) {
        printf("Enter %d customer name: ", i+1);
        insertn();
    }

    printf("\n");
    
    for (i = 0; i < 4; i++) {
        n = removen();
        printf("%d resposnse to: %s\n", i+1, n);
    }

    return 0;
}

void insertn(){
    scanf("%s",&arr[r++]);
}

char* removen(void) {
    char *n = arr[f++];
    return n;
}