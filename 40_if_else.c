// Write a program to accept two integers and check whether they are equal or not
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    if (a == b)
    {
        printf("num are same");
    }
    else
    {
        printf("num are different");
    }
}