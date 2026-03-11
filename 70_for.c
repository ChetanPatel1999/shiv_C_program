//Write a program to display number 1 to n (given number). 
#include <stdio.h>
void main()
{
    int i;
    int n;
    printf("enter a num : ");
    scanf("%d", &n); //12

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}