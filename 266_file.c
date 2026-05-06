// fgetc() :-  its read one char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\cube.txt", "r");

    ch = fgetc(ptr);
    printf("%c ", ch);

    ch = fgetc(ptr);
    printf("%c ", ch);

    ch = fgetc(ptr);
    printf("%c ", ch);
    fclose(ptr);
}