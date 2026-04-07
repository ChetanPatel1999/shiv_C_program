//wap to print 1 to 10 numer using recursion.
#include <stdio.h>
void printNum()
{
    static int i = 1;
    printf("%d\n", i);
    i++; // 3
    if (i <= 10)
    {
        printNum();
    }
}
void main()
{
    printNum();
}