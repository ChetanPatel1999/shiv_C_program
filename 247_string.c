// strcat() :- its used to combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char data1[30], data2[30];
    printf("enter string1 : ");
    gets(data1); // ram
    printf("enter string2 : ");
    gets(data2); // patel
    printf("string1 : %s\n", data1);
    printf("string2 : %s\n", data2);

    char *data3 = strcat(data1, data2);

    printf("string3 : %s\n", data3); // rampatel
  
}