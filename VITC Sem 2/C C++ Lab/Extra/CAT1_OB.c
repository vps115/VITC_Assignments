#include <stdio.h>

int main() {
    char ch;
    printf("Enter direction: (w->west, n->north, s->south): ");
    scanf("%c",&ch);
    
    switch(ch) {
        case ('w'):
        case ('W'):
        printf("\nPlaces: Patna, Kolkata, Gaya, Ranchi and Siliguri\n");
        printf("Budget: Rs. 75,000\n");
        printf("Resort: 3-Star\n");
        printf("Transport: Flight and SUV\n\n");
        break;

        case ('n'):
        case ('N'):
        printf("\nPlaces: Kasi, Delhi, Agra, Ludhiana and Jaipur\n");
        printf("Budget: Rs. 1,00,000\n");
        printf("Resort: 5-Star\n");
        printf("Transport: Flight and Sedan Car\n\n");
        break;

        case ('s'):
        case ('S'):
        printf("\nPlaces: Chennai, Madurai, Tanjore, Trivandrum and Cochin\n");
        printf("Budget: Rs. 80,000\n");
        printf("Resort: 5-Star\n");
        printf("Transport: Flight and Tempo Van\n\n");
        break;
    }
    return 0;
}