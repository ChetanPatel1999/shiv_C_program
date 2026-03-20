#include <stdio.h>
void main()
{
    int num = 12, c = 0;
    int i;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++; // 3
        }
        if (c > 2)
        {
            break;
        }
    }
    if (c == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}