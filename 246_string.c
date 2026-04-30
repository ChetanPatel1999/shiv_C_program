// strcpy() :- its copy one string into another string variable
#include <stdio.h>
#include <string.h>
void main()
{
    char data1[30], data2[30];
    printf("enter string : ");
    gets(data1); // ram
    printf("string1 : %s\n", data1); //ram
    printf("string2 : %s\n", data2); // empty

    // strcpy(data2, data1);

    strcpy(data2, "raj");
    printf("string1 : %s\n", data1); //ram
    printf("string2 : %s\n", data2);// raj
}