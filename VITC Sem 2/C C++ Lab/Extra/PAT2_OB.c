#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main() {
    int u, l, i;
    scanf("%d %d", &l, &u);

    for (i = l; i < u; i++) {
        if (isPrime(i))
        printf("%d ", i);
    }
}

int isPrime(int n) {
    int lim = pow(n,0.5), j;

    for (j = 2; j <= lim; j++) {
        if (j != n && n % j == 0)
        return 0;
    }
    return 1;
}