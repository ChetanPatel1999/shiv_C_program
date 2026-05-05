#include <stdio.h>
void main()
{
    int num, cube;
    FILE *ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\cube.txt", "a");
    printf("enter a num : ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("cube of %d = %d\n", num, cube);
    fprintf(ptr, "cube of %d = %d\n", num, cube);
    fclose(ptr);
}