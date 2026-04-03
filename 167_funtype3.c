// with return type ,with parameter
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res;
    res = add(12, 5);

    printf("add = %d\n", res);

    printf("ans = %d\n", add(10, 30));

    printf("ans = %d\n", add(5, 9));
}