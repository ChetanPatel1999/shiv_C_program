// no return type but with parameter
#include <stdio.h>

void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
}

void add(int a, int b, int c)
{
    int res;
    res = a + b + c;
    printf("addition = %d\n", res);
}

void cube(int num)
{ 
    int res;
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}

void evenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
}


void main()
{
    evenOdd(15);
    // cube(7);
    // add(10, 5, 8);
    // addition(12, 10);
    // addition(20, 15);
}