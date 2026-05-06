// how to read data from file
// fscanf() :- read from file word by word
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[50];
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\cube.txt", "r");
    int s;
    while (1)
    {
        s = fscanf(ptr, "%s", data);
        if (s == EOF)
        {
            break;
        }
        if (strcmp(data, "cube") == 0)
        {
            printf("\n");
        }
        printf("%s ", data);
    }

    fclose(ptr);
}