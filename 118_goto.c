// wap ro print table of given number using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter num : ");
    scanf("%d", &n);
lable:
    printf("%d\n", n * i);
    i++;
    if (i <= 10)
    {
        goto lable;
    }
}