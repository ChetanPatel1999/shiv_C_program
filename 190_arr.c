#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    printf("array element are : \n");
    int i;
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", arr[i]);
    }

    // its add 5 in all array element
    for (i = 0; i < 5; i++)//2
    {
        arr[i] = arr[i] + 5;
    }

    printf("\narray element are after change : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", arr[i]);
    }
}