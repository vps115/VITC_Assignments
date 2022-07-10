#include <stdio.h>

int main() {
    int m, n, i, j, k, x, y, c = 0, dup;

    scanf("%d", &m);
    scanf("%d", &n);

    int mat[m][n], unique[m*n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            k = mat[i][j];
            dup = 1;
            for (x = 0; x < m; x++) {
                for (y = 0; y < n; y++) {
                    if ((x!=i || y!=j) && k == mat[x][y]){
                        dup = 0;
                    }
                    
                }
            }
            if (dup){
                unique[c]=k;
                c++;
            }
        }
    }

    if (c==0){
        printf("-1");
    }
    else{
        for (i = 0; i < c; i++){
            printf("%d\n", unique[i]);
        }
    }



    return 0;
}
