// write data inside file
// "a"  : append mode not delete file previus data its append
//  only current data
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[40] = "this is string variable\n";
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\daksh.txt", "a");

    fprintf(ptr, "hello students\n");
    fprintf(ptr, "how are you students ? \n");
    fprintf(ptr, data);

    fclose(ptr);
}