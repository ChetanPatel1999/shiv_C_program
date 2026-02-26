#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);
    printf("you can eat\n");
    if (age >= 18)
    {
        printf("you can drive\n");
        printf("you can vote\n");
    }
    printf("you can play game\n");
}