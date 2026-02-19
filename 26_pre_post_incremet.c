#include <stdio.h>
void main()
{
    int a = 12, b;

    //  b = a++; // post:- in post increament first assign a value in b variable after that a value increase by one.
    b = ++a; // pre :- in pre increment first increase a value by one after that increseing value assign in b
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}