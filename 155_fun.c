#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void main()
{
    printf("start main function.....\n");
    addition();
    printf("main function is end........\n");
    addition();
    printf("ok good by  students");
}
