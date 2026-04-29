// wap to display length of given string.
#include <stdio.h>
void main()
{
    char str[30];
    printf("enter string : ");
    gets(str); // ram sharma

    printf("string : %s\n", str);

    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++) // 3
    {
        if (str[i] != ' ')
        {
            c++;
        }
    }
    printf("length of string : %d", c);
}