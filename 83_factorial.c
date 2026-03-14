//  Write a program to display factorial of given number.
#include <stdio.h>
void main()
{
    int num, i, fact = 1;
    printf("enter a num : ");
    scanf("%d", &num);         // 5
    for (i = 1; i <= num; i++) // 2
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", num, fact);
}