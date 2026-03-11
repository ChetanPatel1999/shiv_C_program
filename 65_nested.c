// Write a Program to accept user’s marital status, gender and age to check if
// he/she is eligible for marriage or not.
#include <stdio.h>
void main()
{
    int married, age;
    printf(" welcome to shadi.com\n");
    printf("------------------------\n");
    printf("select option : \n");
    printf("1. married \n");
    printf("2. un-marride \n");
    printf("choose option : ");
    scanf("%d", &married);
    switch (married)
    {
    case 1:
        printf("you are already married");
        break;
    case 2:
        printf("------------------------\n");
        printf("select your gender : \n");
        int gender;
        printf("1. male  \n");
        printf("2. female  \n");
        printf("choose option : ");
        scanf("%d", &gender);
        switch (gender)
        {
        case 1:
            printf("enter you age : ");
            scanf("%d", &age);
            if (age >= 21)
            {
                printf("you are eligible for marriage");
            }
            else
            {
                printf("you are not eligible for marriage");
            }
            break;
        case 2:
            printf("enter you age : ");
            scanf("%d", &age);
            if (age >= 18)
            {
                printf("you are eligible for marriage");
            }
            else
            {
                printf("you are not eligible for marriage");
            }
            break;
        default:
            printf("you select wrong input");
        }
        break;
    default:
        printf("you select wrong input");
    }
}