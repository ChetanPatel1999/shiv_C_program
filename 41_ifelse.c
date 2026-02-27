// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a); // 90
    printf("enter b : ");
    scanf("%d", &b); // 500
    if (a > b)
    {
        printf("greatest num = %d", a);
    }
    else
    {
        printf("greatest num = %d", b);
    }
}