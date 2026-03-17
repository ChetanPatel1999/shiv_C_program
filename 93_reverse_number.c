//. Write a program to that takes a number as input and calculates the sum of
// only its even digits.
#include <stdio.h>
void main()
{
    int num, rem, reverse = 0, f = 1;
    printf("enter a num : ");
    scanf("%d", &num); //-345
    if (num < 0)
    {
        num = -num;
        f = 0;
    }
    while (num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if (f == 1)
    {
        printf("reverse number = %d", reverse);
    }
    else
    {
        printf("reverse number = %d", -reverse);
    }
}