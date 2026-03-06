// Write a program to calculate the total salary based on the basic salary:
// If  BS in between 4000-6000     ta 40% & hra is 20%
// If  BS in between 6000-10000  ta 45% & hra is 20%
// If  BS is greater than 10000
//  ta 55% & hra is 5000
#include <stdio.h>
void main()
{
    float bs, ts = 0;
    printf("enter basic sallary : ");
    scanf("%f", &bs);
    if (bs >= 4000 && bs <= 6000)
    {
        ts = bs + (bs * 40) / 100 + (bs * 20) / 100;

    }
    else if (bs > 6000 && bs <= 10000)
    {
        ts = bs + (bs * 45) / 100 + (bs * 20) / 100;

    }
    else if (bs > 10000)
    {
        ts = bs + (bs * 55) / 100 + 5000;

    }
    else
    {
        printf("invalid sallary please enter above then 4000\n");
    }

    printf("your total sallary is %.2f", ts);
}