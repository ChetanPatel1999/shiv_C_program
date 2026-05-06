// fgetc() :-  its read one char from file
// read all file character
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\cube.txt", "r");

    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(ptr);
}