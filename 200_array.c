// . Write a program to find the maximum element in an array.
#include <stdio.h>
void main()
{
    int arr[5] = {6, 700, 80, 45, 3};
    int max, index = 0;
    max = arr[0];
    int i;
    printf("array elment are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }


    //code for find max element and position
    for (i = 0; i < 5; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    printf("\nmax element : %d\n", max);
    printf("index of max-elemet: %d", index + 1);
}