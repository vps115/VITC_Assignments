#include <stdio.h>
int main() {

    struct student {
        int roll;
        char s1[10];
        char s2[10];
        float p;
    } R, S[10];

    for (int i = 0; i<=2; i++) {
        scanf("%s", &S[i].s1);
    }
    printf("Names:\n");
    for (int i = 0; i<=2; i++) {
        printf("%s\n", S[i].s1);
    }
    return 0;
}