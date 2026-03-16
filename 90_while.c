// Write a program that takes a number as input and counts how many digits 
// it contains.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 64536
    while (num > 0)
    {
        sum++;
        num = num / 10;
    }
    printf("digit count in number : %d", sum); // 4
}