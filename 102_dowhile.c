// club mini project
#include <stdio.h>
void main()
{
    int age, order, p, totalBill = 0, a = 0, b = 0, c = 0, q;
    printf("enter your age :");
    scanf("%d", &age); // 45
    if (age >= 18)
    {
        printf("welcome to club ...\n");
        do
        {
        lable:
            printf("club menue: \n");
            printf("1. pizza : 250\n");
            printf("2. burger : 199\n");
            printf("3. cold cofee :  99\n");
            printf("choose any item : ");
            scanf("%d", &order); // 6
            switch (order)
            {
            case 1:
                printf("enter quantity : ");
                scanf("%d", &q);
                printf("\nyour %d pizaa is orderd \n", q);
                totalBill = totalBill + 250 * q;
                a = a + q;
                printf("pizza = %d burger = %d cold coffi = %d \n\n", a, b, c);
                break;
            case 2:
                printf("enter quantity : ");
                scanf("%d", &q);
                printf("\nyour %d burger is orderd \n", q);

                totalBill = totalBill + 199 * q;
                b = b + q;
                printf("pizza = %d burger = %d cold coffi = %d \n\n", a, b, c);
                break;
            case 3:
                printf("enter quantity : ");
                scanf("%d", &q);
                printf("\nyour %d cold cofee is orderd \n", q);

                totalBill = totalBill + 99 * q;
                c = c + q;
                printf("pizza = %d burger = %d cold coffi = %d \n\n", a, b, c);
                break;
            default:
                printf("\nwrong input please enter 1 to 3\n\n");
                goto lable;
            }

            printf("you want to order something more  press 1 otherwise press any character to exit : ");
            scanf("%d", &p);
        } while (p == 1);

        printf("\n\n<--------------sir/mem your bill ------------------>\n");
        printf("---------------------------------------------------\n");
        printf("  item         quantity      price          total \n");
        printf("  pizza          %d            250           %d \n", a, a * 250);
        printf("  burger         %d            199           %d \n", b, b * 199);
        printf("  cold coffi     %d            99            %d \n", c, c * 99);
        printf("---------------------------------------------------\n");
        printf("         sir/mem your total bill : %d\n", totalBill);
        printf("---------------------------------------------------\n\n\n");
    }
    else
    {
        printf("your entry is not allowed in club");
    }
}