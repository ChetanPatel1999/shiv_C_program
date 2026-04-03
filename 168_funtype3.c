// with retrun type with parameter
#include <stdio.h>
int cube(int num)
{
    int res;
    res = num * num * num;
    return res;
}

float average(int a, int b)
{
    float ave;
    ave = (a + b) / 2.0;
    return ave; // 5.5
}

int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int gretestNum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void main()
{
    printf("gretest num = %d\n", gretestNum(8, 23));

    printf("gretest num = %d\n", gretestNum(89, 23));

    // printf("factorial = %d", factorial(3));

    // float res = average(5, 6);

    // printf("avrage = %.1f", res);

    // printf("average = %.1f", average(5, 6));

    // int ans = cube(5);
    // printf("cube = %d", ans);
}