#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure Definition
typedef struct IPAddress{
    char ipa[15];
    int xxx,yyy;
    char name[30];
} IP;

//Split a part from IP Address
int *y;
int split(char ip[15], int j, int len) {
    char temp[3] = "";

    while ((ip[j]!='.') && (j != len)) {
        strncat(temp,&ip[j],1);
        j++;
    }
    
    int x = strlen(temp);
    y = &x;

    int num = atoi(temp);
    return num;
}

//Get input for all computer networks
void get_data(IP arr[], int n) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        
        //Input Name & IP Address
        printf("Enter Nickname of Computer %d: ", i+1);
        scanf("%s", arr[i].name);
        printf("Enter IP Address of Computer %d: ", i+1);
        scanf("%s", arr[i].ipa);
        printf("\n");
        
        //Call split function on the IP Address
        int len = strlen(arr[i].ipa);
        j = 0;
        arr[i].xxx = split(arr[i].ipa, j, len);
        j += *y + 1;
        arr[i].yyy = split(arr[i].ipa, j, len);
    }
}

//Cmpare 2 IP Addresses
void compare(IP arr[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((arr[i].xxx == arr[j].xxx) && (arr[i].yyy == arr[j].yyy)) {
                printf("Machines %s and %s are on the same local network.\n\n", arr[i].name, arr[j].name);
            }
        }
    }
} 

//Main function
int main() {
    int n, i;
    printf("\nEnter number of computers: ");
    scanf("%d", &n);
    printf("\n");

    IP cndetails[n];    
    get_data(cndetails, n);
    compare(cndetails, n);

    return 0;
}
