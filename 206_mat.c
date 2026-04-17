#include <stdio.h>
void main()
{
    //     r  c
    int mat[3][2] = {
        {12, 45},
        {77, 89},
        {33, 66}};
    printf("matrix element are : \n");
    int i, j;
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}