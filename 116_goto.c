//wap to print number 1 to 10 using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
s:
    printf("%d\n", i);
    i++; // 6
    if (i <= 10)
    {
        goto s;
    }
}