//array element address are 
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    printf("array element address are : \n");
    int i;
    for (i = 0; i < 5; i++) 
    {
        printf("%d  ",&arr[i]);
    }

}