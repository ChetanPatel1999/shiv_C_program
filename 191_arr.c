#include <stdio.h>
void main()
{
    int arr[5] = {2, 4, 5, 7, 9};
    printf("array element are : \n");
    int i;
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", arr[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++)//2
    {
        sum = sum + arr[i];//27
    }
    printf("\nsum of array element  = %d", sum);
}