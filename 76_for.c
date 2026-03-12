// wap to print sum 1 to n(given number);
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter num : ");
    scanf("%d", &n); // 10
    int res = 0;
    for (i = 1; i <= n; i++)
    {
        res = res + i;
    }
    printf("sum of 1 to %d = %d\n", n, res);
    printf("avearge of 1 to %d = %.1f", n, res / (float)n);
}