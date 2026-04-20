//  Write a program to find and display the sum of each row and each column of a matrix. 
#include <stdio.h>
int main()
{
    int r, c;
    printf("enter no of row : ");
    scanf("%d", &r);
    printf("enter no of column : ");
    scanf("%d", &c);

    int mat[r][c];
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

    printf("matrix with row colum sum : \n");
    int rsum;
    int csum;
    for (i = 0; i < r; i++) // 2
    {
        rsum = 0;
        csum = 0;
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat[i][j]);
            rsum = rsum + mat[i][j];
            csum = csum + mat[j][i];
        }
        printf("--->sum r%d = %d ", i + 1, rsum);
        printf("--->sum c%d = %d", i + 1, csum);
        printf("\n");
    }

}
