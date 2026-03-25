#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 3
    {
        for (j = 1; j <= 5; j++) //4
        {
            printf("%d ", i * j); //
        }
        printf("\n");
    }
}
