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

    int sum = 0;
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nsum of all array element : %d", sum);

    ptr = temp;
    free(ptr); // delete dynamic memory


    
}