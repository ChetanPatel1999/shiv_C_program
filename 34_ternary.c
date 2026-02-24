// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);//566
    printf("enter b : ");
    scanf("%d", &b);//78

    a > b ?printf("greatest num = %d ",a):printf("greatest num = %d ",b);
}