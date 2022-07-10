#include <stdio.h>
#include <math.h>
int main() {

    int pin, l, i, n, j, lim, prime, p[4],c=0;
    scanf("%d", &pin);

    for (i = 0; i < 4; i++) {
        n = pin%10;
        if (n!=0 && n!=1) {
            lim = (int) pow(n,0.5);
            prime = 1;
            for (j = 1; j<=lim; j++) {
                if (j!=1 && j!=n && n%j==0) {
                    prime = 0;
                }
            }
            if (prime){
                p[c] = n;
                c++;
            }
        }
        
        pin = pin / 10;
    }

    for (i = c-1; i >= 0; i--){
        printf("%d\n", p[i]);
    }

    return 0;
}
