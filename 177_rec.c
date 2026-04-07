// wap to print a msg 5 times using recursion and static valriable.
#include <stdio.h>

void fun()
{
    static int i = 1;                 // its run once time in program.
    printf("hello student\n"); // 3 times
    i++;                              // 4
    if (i <= 5)
    {
        fun();
    }
}
void main()
{

    fun();
}