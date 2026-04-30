// strrev() :- its convert string in reverse order
#include <stdio.h>
#include <string.h>
void main()
{
    char data[30];
    printf("enter string : ");
    gets(data);
    printf("string : %s\n", data);
    strrev(data);
    printf("reverse string : %s\n", data);
}