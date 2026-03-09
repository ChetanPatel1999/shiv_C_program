// Write a program to read the age of a candidate and country of candidate determine whether he
// is eligible to cast his/her own vote in india or not.
#include <stdio.h>
void main()
{
    char country;
    printf("enter 'i' if your indian : ");
    scanf("%c", &country);
    if (country == 'i')
    {
        int age;
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18 && age <= 100)
        {
            printf("you can vote in india");
        }
        else if (age >= 0 && age < 18)
        {
            printf("you are not eligible for voting");
        }
        else
        {
            printf("invalid age ");
        }
    }
    else
    {
        printf("your are not indian");
    }
}