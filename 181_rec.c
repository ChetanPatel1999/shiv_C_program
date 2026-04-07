// # wap to print table of given number usinh recursion
#include <stdio.h>
void table(int num)
{
    static int i = 1;
    printf("%d\n", num * i);
    i++; 
    if (i <= 10)
    {
        table(num);
    }
}
void main()
{
    table(8);
}