#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//3
    {
        for (j = 1; j <= 5; j++)// 3 
        {
            printf("%d ", i); // 3 3 3 3 3
        }
        printf("\n");
    }
}
