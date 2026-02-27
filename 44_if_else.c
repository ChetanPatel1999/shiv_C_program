// Write a program to check whether a character is an alphabet or not.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch); // Q
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("char is alphabet");
    }
    else
    {
        printf("char is not alphabet");
    }
}