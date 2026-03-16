//. Write a program to that takes a number as input and calculates the sum of
// only its even digits.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 64536
    while (num > 0)    // 0
    {
        rem = num % 10;
        if (rem % 2 == 1)
        {
            sum = sum + rem; // 16
        }
        num = num / 10;
    }
    printf("%d", sum); // 16
}