// strcmp() :- its compare two string if string are same return 0
// otherwise return 1
#include <stdio.h>
void main()
{
    char st1[20] = "ram";
    char st2[20] = "ram";

    if (strcmp(st1, st2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}