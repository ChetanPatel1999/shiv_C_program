#include <stdio.h>
int i = 1;   // global variable
void main()
{
    // static int i = 1;
    printf("hello students\n");
    i++; // 3
    if (i <= 5)
    {
        main();
    }
}