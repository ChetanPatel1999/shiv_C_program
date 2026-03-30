#include <stdio.h>
void addition(); // function declaration
void main()
{
    printf("hello main fun is start ....\n");
    addition(); // function calling
    printf("main function is end...");
}
void addition() // function defination
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
