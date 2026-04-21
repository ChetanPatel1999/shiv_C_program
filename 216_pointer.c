#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;

    printf("value of a  = %d\n", a);           // 12
    printf("address of a  = %d\n", &a);        // 6487620
    printf("value of ptr  = %d\n", ptr);       // 6487620
    printf("address of ptr  = %d\n", &ptr);    //
    printf("value of a by ptr  = %d\n", *ptr); // 12
}