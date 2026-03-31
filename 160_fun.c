#include <stdio.h>
void cube()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}
void square()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num;
    printf("square of %d = %d\n", num, res);
}
void main()
{
    int i;
    for (i = 1; i <= 5; i++) // i=6
    {
        square();
    }
    cube();
}
