// Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char later;
    printf("enter first later of your friend name : ");
    scanf("%c", &later); // D
    if (later >= 'A' && later <= 'Z')
    {
        later = later + 32;
         //      65   +32  = 97
    }
    switch (later)
    {
    case 'c':
        printf("chirag ochani");
        break;
    case 'v':
        printf("vivan pamnani");
        break;
    case 'd':
        printf("daksh mourya");
        break;
    case 'm':
        printf("mukesh singh");
        break;
    default:
        printf("you don't have  friend which name start with %c", later);
    }
}