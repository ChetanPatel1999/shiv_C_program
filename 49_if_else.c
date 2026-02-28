// Write a program to check whether a character is an special symbol or not.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        printf("char is not special symbol");
    }
    else
    {
        printf("char is special symbol");
    }
}