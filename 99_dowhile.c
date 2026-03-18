
#include <stdio.h>
void main()
{
    int num, a, b, c, p;
    printf("<------ welcome to my calculator ----->\n");
    do
    {

        printf("      press 1 for addition \n");
        printf("      press 2 for subtraction \n");
        printf("      press 3 for multiplication \n");
        printf("      press 4 for division \n");
        printf("      choose any option : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("you choosed addition app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a + b;
            printf("addition = %d\n", c);
            break;
        case 2:
            printf("you choosed subtraction app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a - b;
            printf("subtraction = %d\n", c);
            break;
        case 3:
            printf("you choosed multplication app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a * b;
            printf("multplication = %d\n", c);
            break;
        case 4:
            printf("you choosed division app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a / b;
            printf("division = %d\n", c);
            break;
        }

        printf("press 1 to continue calculator : ");
        scanf("%d", &p); // 1
    } while (p == 1);
    printf("thanks for using my calculator");
}