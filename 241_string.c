// wap to display length of given string.
#include <stdio.h>
int length(char s[])
{
    int i, c = 0;
    for (i = 0; s[i] != '\0'; i++) // 3
    {
        c++;
    }
    return c;
}
void main()
{
    char str[30] = "hello";

    printf("string : %s\n", str);

    printf("length of string %d\n", length(str));

    char name[20] = "rajesh";

    printf("string : %s\n", name);

    printf("length of string %d\n", length(name));
}