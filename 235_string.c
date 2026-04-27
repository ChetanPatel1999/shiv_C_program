// fgets() :- its take user input
// fputs() :- its display data on console
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter your name : ");

    fgets(name, 50, stdin);

    fputs(name, stdout);
}