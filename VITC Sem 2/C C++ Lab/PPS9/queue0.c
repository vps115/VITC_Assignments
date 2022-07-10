//QUEUE DATA STRUCTURE
#include <stdio.h>
#include <stdlib.h>

char arr[4];
int r = 0, f = 0;

void insertn(char n);
char removen(void);

int main() {
    int i;
    char num;
    
    insertn('a');
    insertn('b');
    insertn('c');
    insertn('d');

    for (i = 0; i < 4; i++) {
        num = removen();
        printf("%c\n",num);
    }
}

void insertn(char n) {
    arr[r++] = n;
}

char removen(void) {
    char n = arr[f++];
    return n;
}


