// Write a program to read the age of a candidate and determine whether he is
//  eligible to cast his/her own vote
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age); // 15
    if (age >= 18)
    {
        printf("you can vote\n");
        printf("please do vote for right candidates");
    }
    else
    {
        printf("you can not vote\n");
        int res;
        res = 18 - age;
        printf("you can vote afetr %d years", res);
    }
}