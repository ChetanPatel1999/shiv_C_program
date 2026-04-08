#include <stdio.h>
void fun(int num)
{
    if (num > 1)
    {
        fun(num - 1);
    }
    printf("%d \n", num);
}
void main()
{
    fun(5);
}