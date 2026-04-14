#include <stdio.h>
void inputArray(int arr[], int n)
{
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++) // 5
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n)
{
    int i;
    printf("array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main()
{
    int distance[5];
    inputArray(distance, 5);
    displayArray(distance, 5);
}