// wap to convert Uper case string in lower case string.
#include <stdio.h>
void main()
{
    char str[30];
    printf("enter string : ");
    gets(str); // Hello123

    printf("string : %s\n", str);
    int i;
    for (i = 0; str[i] != '\0'; i++) // 1
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("lower string : %s\n", str);
}