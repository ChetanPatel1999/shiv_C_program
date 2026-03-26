#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // 3
    {
        for (j = i; j <= 5; j++) // 6
        {
            printf("%d ", j); // 5  \n  4 5 \n 3 4 5
        }
        printf("\n");
    }
}
