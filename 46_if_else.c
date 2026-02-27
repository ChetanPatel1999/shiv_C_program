// Write a program to check whether a character is an digit or not.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    printf("char : %c\n", ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("char is digit");
    }
    else
    {
        printf("char is not digit");
    }
}