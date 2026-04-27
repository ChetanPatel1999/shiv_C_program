// take input from user
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter your name : ");

    scanf("%[^\n]s", name);

    printf("name = %s\n", name);
}