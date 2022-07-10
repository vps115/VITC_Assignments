#include <stdio.h>
#include <string.h>

struct engine {
    char sno[4];
    int year;
    char mat[30];
    int quant;
};

struct engine arr []= {{"BB1", 1990, "Stainless Steel", 23},
{"BB2", 1992, "Stainless Steel", 23},
{"BB3", 1995, "Steel", 23},
{"BB4", 1999, "Iron", 23},
{"BB5", 2000, "Stainless Steel", 23},
{"BB6", 2003, "Aluminuim", 23},
{"BB7", 2005, "Steel", 23},
{"BB8", 2006, "Steel", 23},
{"BB9", 2009, "Stainless Steel", 23},
{"CC0", 2010, "Iron", 23},
{"CC1", 2012, "Iron", 23},
{"CC2", 2015, "Steel", 23},
{"CC3", 2017, "Aluminium", 23},
{"CC4", 2019, "Aluminium", 23},
{"CC5", 2020, "Stainless Steel", 23},
{"CC6", 2021, "Steel", 23}};

int main() {
    char srno[4];
    int n, i, j, l;

    printf("\nEnter number of details to be checked: ");
    scanf("%d", &n);

    for (j = 0; j < n; j++) {
        
        printf("\nEnter Serial Number: ");
        scanf("%s", &srno);
        l = strlen(srno);

        if (l != 3)
        i = -1;
        else if (srno[0] == 'B')
        i = srno[2] - 1 - 48;
        else if (srno[0] == 'C')
        i = srno[2] + 9 - 48;
        else {
            i = -1;
        }

        if (i > 15 || i == -1) {
            printf("Does not exist in database.\n");
        }

        else {
            printf("Serial Number: %s", arr[i].sno);
            printf("\nYear of Manufacture: %d", arr[i].year);
            printf("\nMaterial Used: %s", arr[i].mat);
            printf("\nQuantity Manufactured: %d\n", arr[i].quant);
        }
    } 

    printf("\n");
    return 0;
}