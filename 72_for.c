//wap to print table of given numver.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); //7
    for (i = 1; i <= 10; i++) // 3
    {
        printf("%d \n", n * i);
    }
}