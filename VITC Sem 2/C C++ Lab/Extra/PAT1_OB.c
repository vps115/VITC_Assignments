#include <stdio.h>

int main() {
    int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0, i;
    scanf("%d", &n);
    
    int w[n], a[n];
    char s[n];
    
    for (i = 0; i < n; i++) {
        scanf("%s", &s[i]);
        scanf("%d", &a[i]);
        scanf("%d", &w[i]);
        
        if (s[i] == 'B') {
            if (a[i] > 18 && w[i] >= 50) {
                c1++;
            }
            else if (a[i] < 18 || w[i] < 50) {
                c3++;
            }
        }
        
        if (s[i] == 'G') {
            if (a[i] > 18 && w[i] < 50) {
                c2++;
            }
            else if (a[i] < 18 || w[i] >= 50) {
                c4++;
            }
        }
    }
    
    printf("%d\n", c1);
    printf("%d\n", c2);
    printf("%d\n", c3);
    printf("%d\n", c4);
    
    return 0;
}