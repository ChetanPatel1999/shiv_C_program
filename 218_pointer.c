//when we increase pointer value by one so its increase by 4 if pointer is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;

    printf("&a  =  %d\n", &a);
    printf("ptr  =  %d\n", ptr);

    ptr++;

    printf("&a  =  %d\n", &a);
    printf("ptr  =  %d\n", ptr);
}