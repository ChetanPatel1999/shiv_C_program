// wap to print 1 to 10 even numer using recursion.
#include <stdio.h>
void printEven()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    i++; //4
    if (i <= 10)
    {
        printEven();
    }
}
void main()
{
    printEven();
}