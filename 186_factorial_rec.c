#include <stdio.h>
// int sum(int num)
// {
//     int res = 0, i;
//     for (i = 1; i <= num; i++)//6
//     {
//         res = res + i;//15
//     }
//     return res;
// }

// int sum(int num)
// {
//     static int res = 0, i = 1;
//     res = res + i; //15
//     i++;//6
//     if (i <= num)
//     {
//         sum(num);
//     }
//     return res;
// }

int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num + sum(num - 1);
}

void main()
{
    printf("sum = %d\n", sum(5));
}