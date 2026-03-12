// wap to print table of given numver.
//  5 x 1 = 5
//  5 x 2 = 10
//  5 x 3 = 15
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);          // 5
    for (i = 1; i <= 10; i++) // 2
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
}