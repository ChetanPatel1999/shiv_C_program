//  Write a program to find the transpose of a matrix.
#include <stdio.h>
int main()
{
    int mat[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    int i, j;
    printf("matrix element are : \n");

    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int f = 0;
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            if (i == j && mat[i][j] == 1)
            {
                continue;
            }
            else if (i != j && mat[i][j] == 0)
            {
                continue;
            }
            f = 1;
            goto lab;
        }
    }
lab:
    if (f == 0)
    {
        printf("matrix is identity matrix");
    }
    else
    {
        printf("matrix is not identity matrix");
    }
}
