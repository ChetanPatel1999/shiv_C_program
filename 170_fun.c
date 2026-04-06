#include <stdio.h>
float areaOfCircle(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    return area;
}
void main()
{
    float c1 = areaOfCircle(4.6);

    printf("my circle area : %.2f\n", c1);

    float c2 = areaOfCircle(3.6);

    printf("area of circle which radius 3.6 : %.2f\n", c2);

    // float c3 = areaOfCircle(6);

    if (areaOfCircle(6) > 50)
    {
        printf("area of circle greter then 50 ");
    }
    else
    {
        printf("area of circle less then 50 ");
    }
}