// visit each character of string using null character
#include <stdio.h>
void main()
{
    char name[50] = "daksh mourya";
    int i;

    for (i = 0; name[i] != '\0'; i++) // 5
    {
        printf("%c\n", name[i]);
    }
}