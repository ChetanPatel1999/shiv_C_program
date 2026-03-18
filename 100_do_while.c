// wap to take a numbers form user and
//  display sum till we press 1.

#include <stdio.h>
void main()
{
    int totalMarks = 0, marks, p;
    do
    {
        printf("enter marks : ");
        scanf("%d", &marks);             // 30
        totalMarks = totalMarks + marks; // 100
        printf("press 1 if more students : ");
        scanf("%d", &p); // 3
    } while (p == 1);

    printf("total marks of students : %d", totalMarks);
}