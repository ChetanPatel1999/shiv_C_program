#include <stdio.h>
void main()
{
    int i = 1; // 
start:     // start is a lable name 
    printf("hello students\n"); 
    i++;                        
    if (i <= 5)
    {
        goto start;
    }

    printf("after if stmnt ");
}