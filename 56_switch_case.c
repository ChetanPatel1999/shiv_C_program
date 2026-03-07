// wap to print day name according to number.
#include <stdio.h>
void main()
{
    int day;
    printf("enter a day num : ");
    scanf("%d", &day);// 3
    switch (day)
    {
       case 1: printf("monday\n");break;
       case 2: printf("tuesday\n");break;
       case 3: printf("wednusday\n");break;
       case 4: printf("thursady\n");break;
       case 5: printf("friday\n");break;
       case 6: printf("saturday\n");break;
       case 7: printf("sunday\n");break;
       default: printf("wrong input ! please enter 1 to 7");
    }
}