#include <stdio.h>

int* FIND_PASSWORD (int *arr);

int p[8];

int main() {
    int rgn[8], i, *pwd;
    
    printf("Registration No: ");
    for (i=0; i<8; i++) {
        scanf("%d",&rgn[i]);
    }
    
    pwd = FIND_PASSWORD(rgn);

    printf("Password: ");
    for (i=0; i<8; i++) {
        printf("%d",*pwd);
        *pwd++;
    }
    return 0;
}

int* FIND_PASSWORD (int *arr) {
    int i, even[8],odd[8],e = 0, o = 0;
    for (i = 0; i<8; i++) {
        if (*arr%2==0) {
            even[e] = *arr;
            e++;
        }
        else {
            odd[o]= *arr;
            o++;
        }
        *arr++;
    }

    for (i=0; i<8; i++) {
        if (i < o) {
            p[i] = odd[i];
        }
        else {
            p[i] = even[i - o];
        }
    }

    return p;
}