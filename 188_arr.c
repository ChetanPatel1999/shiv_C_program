// array frist program
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

    arr[2] = 900;

    printf("\narray element are after change : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", arr[i]);
    }
}