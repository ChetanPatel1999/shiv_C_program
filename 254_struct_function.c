// only dispay above then 5 rs pen
// only display which company name only 4 laters
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};

void above_5_pen(struct pen arr[], int n)
{
    int i;
    printf("pen which price above then 5 rs : \n");
    for (i = 0; i < n; i++) // 1
    {
        if (arr[i].price > 5)
        {

            printf("name : %s\n", arr[i].name);
            printf("-----------------------------\n");
        }
    }
}
void print_3char_name(struct pen p[], int n)
{
    int i;
    // abc   bbba  rxt  cx  mgx  pr  goldex
    printf("pen which name contain only3 laters : \n");
    for (i = 0; i < 5; i++) // 1
    {
        if (strlen(p[i].name) == 3)
        {

            printf("name : %s\n", p[i].name);
            printf("-----------------------------\n");
        }
    }
}
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
        printf("\npen%d info : \n", i + 1);
        printf("name : %s\n", p[i].name);
        printf("price : %d\n", p[i].price);
        printf("rating : %.1f\n", p[i].rating);
        printf("-----------------------------\n");
    }

    above_5_pen(p, 5);

    print_3char_name(p, 5);
}