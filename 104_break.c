#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 5
    {
        if (i < 5)
        {
            printf("%d \n", i);
        }
        else
        {
            break;
        }
    }
}