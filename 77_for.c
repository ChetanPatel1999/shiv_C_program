//. Write a program to display sum 1 to n  ( given number) only even numbers 
// sum. 
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter num : ");
    scanf("%d", &n); // 10
    int res = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            res = res + i;
        }
    }
    printf("sum of 1 to %d = %d\n", n, res);//
   
}