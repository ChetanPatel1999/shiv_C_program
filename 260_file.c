// write data inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[40] = "this is string variable\n";
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\daksh.txt", "w");

    fprintf(ptr, "hello students\n");
    fprintf(ptr, "how are you students ? \n");
    fprintf(ptr, data);

    fclose(ptr);
}