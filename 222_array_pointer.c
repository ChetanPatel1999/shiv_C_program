#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0]; // 400

    printf("enter arry element : \n");
    for (i = 0; i < 5; i++) // 4
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    // ptr = &arr[0];
    ptr = ptr - 5;

    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 2
    {
        printf("%d ", *ptr); //  12
        ptr++;               // 408
    }
}