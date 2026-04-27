// wap to count vovel in given string
#include <stdio.h>
void main()
{
    char name[50] = "daksh mourya";
    int i, c = 0;

    for (i = 0; name[i] != '\0'; i++) // 5
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            c++;
        }
    }

    printf("string : %s\n", name);
    printf("total vovels : %d", c);
}