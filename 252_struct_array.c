#include <stdio.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen p[5];

    int i;
    for (i = 0; i < 5; i++) // 1
    {
        printf("enter pen%d info : \n", i + 1);
        printf("enter name : ");
        scanf("%s", p[i].name);
        printf("enter price : ");
        scanf("%d", &p[i].price);
        printf("enter rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 5; i++) // 1
    {
        printf("\npen%d info : \n",i+1);
        printf("name : %s\n", p[i].name);
        printf("price : %d\n", p[i].price);
        printf("rating : %.1f\n", p[i].rating);
        printf("-----------------------------\n");
    }
}