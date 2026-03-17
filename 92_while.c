//. Write a program to that takes a number as input and calculates the sum of
// only its even digits.
#include <stdio.h>
void main()
{
    int num, rem, reverse = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 564
    while (num > 0)
    {
        rem = num % 10;               // 5
        reverse = reverse * 10 + rem; // 46
        num = num / 10;               // 5
    }
    printf("reverse number = %d", reverse); //  623
}