#include <stdio.h>
void fun(int num)
{
    printf("hello students\n");
    if (num > 1)
    {
        fun(num - 1);
    }
}
void main()
{
    fun(5);
}