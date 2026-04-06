#include <stdio.h>

int EvenOdd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int i;
    for (i = 1; i <= 20; i++)//4
    {
        if (EvenOdd(i))
        {
            printf("%d ", i);
        }
    }

    // if (EvenOdd(11))
    // {
    //     printf("num is even");
    // }
    // else
    // {
    //     printf("num is odd");
    // }
}