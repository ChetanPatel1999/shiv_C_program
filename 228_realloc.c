#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i;
    int *ptr, *temp;
    printf("enter dynamic array size : ");
    scanf("%d", &n); // 5
    ptr = (int *)malloc(n * sizeof(int));
    temp = ptr;
    printf("dynamic array address : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;

    int n2;
    printf("\nenter incresing size array : ");
    scanf("%d", &n2); // 8
    int *ptr1 = (int *)realloc(ptr, n2 * sizeof(int));
    temp = ptr1;
    printf("new dynamic array address : \n");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr1);
        ptr1++;
    }
    ptr1 = temp;
    free(ptr1);
}