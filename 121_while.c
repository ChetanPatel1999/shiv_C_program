// 56547
// 4
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int rem;
    int num = 676453;
    int digit = 6;
    while (num != 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            printf("num is found");
            exit(0);
        }
        num = num / 10;
    }
    printf("num is not found");
}