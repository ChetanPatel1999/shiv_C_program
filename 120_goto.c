#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num = 49;
    if (num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

even:
    printf("num is even\n");
    exit(0); // exit from program
odd:
    printf("num is odd\n");
}