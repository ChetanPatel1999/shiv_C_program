#include <stdio.h>
void main()
{
    int i = 1;
    printf("hello students\n");
    i++; // 2
    if (i == 5)
    {
        goto start;
    }
    printf("stmnt 1\n");
    printf("stmnt 2\n");
    printf("stmnt 3\n");
start:
    printf("after if stmnt ");
}