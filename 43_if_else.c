//  Write a program to accept two numbers and check if the first is a multiple of the
// second.
#include <stdio.h>
void main()
{
    int n1, n2;
    printf("enter n1 : ");
    scanf("%d", &n1); // 500
    printf("enter n2 : ");
    scanf("%d", &n2); // 100
    if (n1 % n2 == 0)
    {
        printf("frist val is multiple of second");
    }
    else
    {
        printf("frist val is not multiple of second");
    }
}