// fputc() :- its used to write one char inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch = 'T';
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\cube.txt", "a");

    // fputc('X', ptr);
    fputc(ch, ptr);
    fclose(ptr);
}