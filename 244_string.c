// strupr() :- its convert string in upper case
// strlwr() :- its convert string in lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char data[30];
    printf("enter string : ");
    gets(data);
    printf("string : %s\n", data);
    // strupr(data);
    strlwr(data);
    printf("upper string : %s\n", data);
}