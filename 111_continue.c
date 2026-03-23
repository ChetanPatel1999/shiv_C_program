// wap to print 1 to 20 number but skip 12 to 15 numbers using continue.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++) // 16
    {
        if (i >= 12 && i <= 15)
        {
            continue;
        }
        printf("%d ", i); // 1  2 3 4 5 6 7 8 9 10 11  16 17
    }
}