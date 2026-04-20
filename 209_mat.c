#include <stdio.h>
void main()
{
    int r, c;
    printf("enter no of row : ");
    scanf("%d", &r);
    printf("enter no of column : ");
    scanf("%d", &c);

    int mat[r][c]; //
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");

    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            sum = sum + mat[i][j];
        }
    }

    printf("sum of all matrix element : %d", sum);
    printf("\naverage  of all matrix element : %.2f", sum / (float)(r * c));
}