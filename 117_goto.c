//wap ro print even number series using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
lable:
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    i++;
    if (i <= 10)
    {
        goto lable;
    }
}