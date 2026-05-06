// fgetc() :-  its read one char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\cube.txt", "r");

    printf("pointer pos = %d\n", ftell(ptr)); // ftell funtion is used to return pointer current position.

    fseek(ptr, 15, SEEK_SET); // its set pointer location inside file

    printf("pointer pos = %d\n", ftell(ptr));

    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }

    printf("\npointer pos = %d\n", ftell(ptr));

    // fseek(ptr, 0, SEEK_SET);

    rewind(ptr); // rewind set pointer position at the begining.

    printf("\npointer pos = %d\n", ftell(ptr));

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