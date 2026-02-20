#include <stdio.h>
void main()
{
    int res;
    // res = 12 > 7 && 8 == 8 && 67 > 9;
    // res = 12 > 77 || 5 == 9 || 8 > 90;
    // res = !(45 > 9);
    res = !(12 > 7 && 4 == 9);
    printf("res = %d", res);
}