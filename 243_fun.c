// strlen() :- its return string length
#include <stdio.h>
#include<string.h>
void main()
{
    char str[30];
    printf("enter string : ");
    gets(str);
    printf("string : %s\n", str);

    printf("length of string = %d", strlen(str));
}