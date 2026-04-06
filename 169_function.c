#include <stdio.h>

// //no return type no parameter
// void areaOfCircle()
// {
//     float radius, area;
//     printf("enter radius : ");
//     scanf("%f", &radius);
//     area = 3.141 * radius * radius;
//     printf("area of circle : %.2f", area);
// }

// // no return type with  parameter
// void areaOfCircle(float radius)
// {
//     float  area;
//     area = 3.141 * radius * radius;
//     printf("area of circle : %.2f", area);
// }

// // with return type with  parameter
// float areaOfCircle(float radius)
// {
//     float area;
//     area = 3.141 * radius * radius;
//     return area;
// }

// with return type no parameter
float areaOfCircle()
{
    float area, radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    area = 3.141 * radius * radius;
    return area;
}

void main()
{
    float ans = areaOfCircle();
    printf("area of circle = %.2f", ans);
}