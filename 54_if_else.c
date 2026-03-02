// Write a program to find greatest number among has given three numbers.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("greates num = %d", a);
    }
    else if (b > c)
    {
        printf("greates num = %d", b);
    }
    else
    {
        printf("greates num = %d", c);
    }
}