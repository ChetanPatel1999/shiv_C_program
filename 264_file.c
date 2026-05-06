// how to read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[50];
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\cube.txt", "r");

    fscanf(ptr, "%s", data);

    printf("%s ", data);

    fscanf(ptr, "%s", data);

    printf("%s", data);

    fclose(ptr);
}