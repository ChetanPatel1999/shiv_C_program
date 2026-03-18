// Keep taking marks from the user until they enter a mark greater than 100
// (invalid), then stop.

#include <stdio.h>
void main()
{
    int totalMarks = 0, marks, p;
    do
    {
        printf("enter marks : ");
        scanf("%d", &marks);//120
        totalMarks = totalMarks + marks;
    } while (marks < 100);

    printf("total marks of students : %d", totalMarks);
}