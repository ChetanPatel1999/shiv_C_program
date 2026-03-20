// 786582
// 9
#include <stdio.h>
void main()
{
    int num = 7863872;
    int digit = 7;
    int rem, flag = 0;
    while (num != 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            flag = 1;
            break;
        }

        num = num / 10;
    }

    if (flag == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}