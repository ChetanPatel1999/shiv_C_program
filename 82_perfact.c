//  Write a program to check give number is prime or not.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 6
    int sum = 0;
    for (i = 1; i <= n; i++) // 2
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n * 2)
    {
        printf("perfect num ");
    }
    else
    {
        printf("not perfect num",sum);
    }
}