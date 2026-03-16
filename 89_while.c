// Write a program to takes a number as input and calculates the sum of its
//  individual digits.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 4368
    while (num > 0)
    {
        rem = num % 10;  // 4
        sum = sum + rem; // 13
        num = num / 10;  // 0
    }
    printf("sum of indivdual digit = %d", sum); // 13
}