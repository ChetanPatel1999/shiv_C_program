//  Write a program to check given number in range of 100-200 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 150
    num > 100 && num < 200 ? printf("num in range(100-200)") : printf("num not in range(100-200)");
}