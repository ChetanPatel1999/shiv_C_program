#include <stdio.h>
void main()
{
    //     r  c
    int mat[2][3] = {{12, 45, 67}, {77, 89, 44}};
    printf("matrix element are : \n");
    int i, j;
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}