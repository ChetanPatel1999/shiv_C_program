// we can cange varible value using pointer
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;

    printf("a  =  %d\n", a);

    *ptr = 90;  // change value of a using pointer

    printf("a  =  %d\n", a);
}