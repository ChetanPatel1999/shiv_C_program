// club mini project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age :");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("welcome to club ...\n");
        printf("club menue: \n");
        printf("1. pizza : 250\n");
        printf("2. burger : 199\n");
        printf("3. cold cofee :  99\n");
        printf("choose any item : ");
        scanf("%d", &order); // 7
        if (order == 1)
        {
            printf("your pizaa is orderd please pay 250 rs\n");
        }
        else if (order == 2)
        {
            printf("your burger is orderd please pay 199 rs\n");
        }
        else if (order == 3)
        {
            printf("your cold coffe is orderd please pay 99 rs\n");
        }
        else
        {
            printf("you choosed wrong number please enter 1 to 3");
        }
    }
    else
    {
        printf("your entry is not allowed in club");
    }
}