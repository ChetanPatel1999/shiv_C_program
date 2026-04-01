// no return type , no parameter
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
void cube()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}
void evenOdd()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
}

void table()
{
    int num, i;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }
}
void main()
{
     table();
}