#include <stdio.h>
#include <string.h>
struct pen
{
    char name[20];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3;

    printf("enter pen1 info : \n");
    printf("enter name : ");
    scanf("%s", p1.name);
    printf("enter price : ");
    scanf("%d", &p1.price);
    printf("enter rating : ");
    scanf("%f", &p1.rating);

    printf("enter pen2 info : \n");
    printf("enter name : ");
    scanf("%s", p2.name);
    printf("enter price : ");
    scanf("%d", &p2.price);
    printf("enter rating : ");
    scanf("%f", &p2.rating);

    printf("\npen1 info : \n");
    printf("name : %s\n", p1.name);
    printf("price : %d\n", p1.price);
    printf("rating : %.1f\n", p1.rating);

    printf("\npen2 info : \n");
    printf("name : %s\n", p2.name);
    printf("price : %d\n", p2.price);
    printf("rating : %.1f\n", p2.rating);
}