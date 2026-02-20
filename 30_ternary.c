// Write a program to read the age of a candidate and determine whether he is
//  eligible to cast his/her own vote
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age); //91
    age >= 18 ? printf("you can vote") : printf("you can not vote");
}