// 9. Write a program to display the array elements in reverse order.
//{12,34,56,78,90}
// 90,78,56,34,12
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter array size : ");
    scanf("%d", &n); // 5
    int arr[n];
    printf("enter array elemenet : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 12,34,56,78,90
    printf("array element are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\narray element are in reverse order  :\n");
    for (i = n - 1; i >= 0; i--) //-1
    {
        printf("%d ", arr[i]); //12
    }
}