// gets() :- its take user input
// puts() :- its display data on console
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter your name : ");

    gets(name);

    puts(name);
}