#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    ptr = malloc(20);
    temp = ptr;
    printf("enter arry element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    // ptr = ptr - 5;
    ptr = temp;

    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}