#include<stdio.h>
int main() {
    int a[3]={4,5,6};
    int *c;
    c=a;
    printf("%d\n",a[1]+*c);
}