//  Write a program to check give number is prime or not.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 6
    int count = 0;
    for (i = 1; i <= n; i++) // 2
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("number is not prime");
    }
}