#include <stdio.h>
void cube()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}
void main()
{
    cube();
    cube();
    cube();
    cube();
}
