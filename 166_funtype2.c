#include <stdio.h>
void factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 7
    {
        factorial(i);
    }
}
void main()
{
    range(1, 5);

    printf("-------------------------\n");

    range(6, 8);

    printf("-------------------------\n");

    range(3, 7);
}