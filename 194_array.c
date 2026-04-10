
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n); // 17

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

    printf("\narray even elements are : \n");
    // 3 7 5 8 2 
    for (i = 0; i < n; i++) // 1
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}