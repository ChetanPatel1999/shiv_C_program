// Write a program to print squares of all numbers present in a given array.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);

    int arr[n];
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements are : \n");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", arr[i]);
    }

    printf("\narray elements square are : \n");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", arr[i] * arr[i]);
    }
}