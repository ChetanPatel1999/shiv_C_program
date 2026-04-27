#include <stdio.h>
void main()
{
    // char name[6] = {'d', 'a', 'k', 's', 'h', '\0'};
    char name[6] = "daksh";

    printf("student name = %s\n", name);

    printf("student name = %c\n", name[0]);
    printf("student name = %c\n", name[1]);
    printf("student name = %c\n", name[2]);
    printf("student name = %c\n", name[3]);
    printf("student name = %c\n", name[4]);
}