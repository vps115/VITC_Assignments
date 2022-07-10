#include <stdio.h>

// Declare functions
int binary(int n);
int eveodd(int n);
int digitsum(int n);

// Main function
int main() {

    // Read n
    int n, i;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    // Read array and assign pointer to it
    int arr[n], *ptr;
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    
    /* Convert to binary, Check for even or odd number of 1's,
    and if satisfies condition add individual digits of number
    to sum */
    int sum = 0, r;
    for (i = 0; i < n; i++){
        r = eveodd(binary(*ptr));
        if (r)
        sum += digitsum(*ptr);
        ptr++;
    }

    // Display final sum
    printf("\nSum of digits of elements that satisfy the condition: ");
    if (sum==0)
    printf("-1\n\n");
    else
    printf("%d\n\n", sum);

    return 0;
}

// Function for conversion to binary
int binary(int n) {
    int b = 0, i = 1, r;
    while (n > 0) {
        r = n % 2;
        b += r * i;
        i *= 10;
        n /= 2;
    }
    return b;
}

// Function for counting even or odd number of 1's
int eveodd(int n) {
    int r, c = 0;
    while (n > 0) {
        r = n % 10;
       
        if (r == 1)
        c += 1;
        
        n /= 10;
    }

    if (c%2==0)
    return 1;
    else
    return 0;
}

// Function for calculating sum of individual digits of a number
int digitsum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}