#include <stdio.h>
float msg()
{
    printf("hello bachho\n");
    printf("how are you\n");
    return 89.78;
    printf("after return stmnt1");
    printf("after return stmnt2");
}
void main()
{

    printf("res = %.2f", msg());
}