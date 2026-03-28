#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 4
    {
        for (j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}