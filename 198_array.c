//  Write a program to copy elements from one array to another.
#include <stdio.h>
void main()
{
    int arr1[5] = {3, 7, 8, 9, 5};
    int arr2[5];

    // copy a one array element into another array
    int i;
    for (i = 0; i < 5; i++) // i = 0
    {
        arr2[i] = arr1[i];
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\ncopy array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}