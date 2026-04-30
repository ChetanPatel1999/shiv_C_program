// wap to convert lower case string in upper case string.
#include <stdio.h>
void upperCase(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++) // 1
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}
void main()
{
    char str[30];
    printf("enter string : ");
    gets(str); // hello

    printf("string : %s\n", str);

    upperCase(str);

    printf("Uper string : %s\n", str);
}