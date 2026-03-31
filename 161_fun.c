#include <stdio.h>
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
    scanf("%d", &num); //6
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }
}
void main()
{
    table();
}