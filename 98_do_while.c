#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please buy a bike for me !\n");
        printf("if bike is not purchesed so press 1 : ");
        scanf("%d", &num); // 5
    } while (num == 1);
    printf("thanks papa for a bike");
}