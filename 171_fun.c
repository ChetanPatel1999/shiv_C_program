#include <stdio.h>
void areaOfCircle(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    printf("area of circle : %.2f\n", area);
}
void main()
{
    float radius=9;
    areaOfCircle(radius);

    areaOfCircle(3.6);

    areaOfCircle(6);
}