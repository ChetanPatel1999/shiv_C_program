#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++) // 2
    {
        for (s = 1; s <= 5; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}