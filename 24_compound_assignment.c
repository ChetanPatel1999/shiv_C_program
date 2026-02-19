// example of compound assignment
#include <stdio.h>
void main()
{
    int a = 12, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // a += b;    // a=a+b;
    // b += a;

    // a += 20; // a=a+20;
    // a -= b;
    // a *= b;
    // b *= b;
    // b *= b;
    // a %= 8;
    a %= b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}