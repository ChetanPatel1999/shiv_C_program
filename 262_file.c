// store student data inside file rno and name
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\PC\\Desktop\\chetan\\student.txt", "a");
    char name[20];
    int rno;
    printf("enter rno : ");
    scanf("%d", &rno);
    printf("enter name : ");
    scanf("%s", name);

    fprintf(ptr, "%d : %s\n", rno, name);

    fclose(ptr);
}