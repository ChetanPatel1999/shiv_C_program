// wap to print reverse string of given string.
#include <stdio.h>
void main()
{
    char str[30];
    printf("enter string : ");
    gets(str); // ram

    printf("string : %s\n", str);
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++) // 1
    {
        c++;
    }

    printf("reverse string : ");
    for (i = c - 1; i >= 0; i--)//-1
    {
        printf("%c", str[i]);
    }
}