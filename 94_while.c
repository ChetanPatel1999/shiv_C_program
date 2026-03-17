//. Write a program to that takes a number as input and calculates the sum of
// only its even digits.
#include <stdio.h>
void main()
{
    int num, rem, reverse = 0;
    printf("enter a num : ");
    scanf("%d", &num); //-345
    while (num)    // -345 != 0
    {
        rem = num % 10;// -3
        reverse = reverse * 10 + rem; //-543
        num = num / 10; //-3
    }

    printf("reverse number = %d", reverse);
}