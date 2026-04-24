#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp;
    int i, n;
    printf("enter dynamic array size : ");
    scanf("%d", &n); // 5

    ptr = (int *)malloc(n * sizeof(int));

    temp = ptr;
    printf("enter arry element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = temp;

    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 420
    }

    ptr = temp;
    printf("\narray even element are : \n");
    for (i = 0; i < n; i++)
    {
        if (*ptr % 2 == 0)
        {
            printf("%d ", *ptr);
        }
        ptr++; // 420
    }

    ptr = temp;
    free(ptr); // delete dynamic memory
}