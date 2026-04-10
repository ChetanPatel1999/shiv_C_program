
#include <stdio.h>
void main()
{
    int arr[5];
    int i;

    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("array elements are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", arr[i]);
    }
}