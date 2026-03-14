// wap to print even number 1 to n.
#include <stdio.h>
void main()
{
    int i = 1, n = 30;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}