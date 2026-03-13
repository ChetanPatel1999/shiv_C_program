//  Write a program to display factors count of given number..
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 12
    int count = 0;
    for (i = 1; i <= n; i++) // 2
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("factors count =  %d ", count); // 4
}