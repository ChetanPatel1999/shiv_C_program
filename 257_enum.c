// enum :- its also user defined data type
//  its used to store integer constant values.
#include <stdio.h>
enum day {mon=12,tue,wed,thu=6,fri,sat=100,sun=30};
enum status{a=45,b=8};
void main()
{
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("mon = %d\n",mon);
    printf("tue = %d\n",tue);
    printf("wed = %d\n",wed);
    printf("thu = %d\n",thu);
    printf("fri = %d\n",fri);
    printf("sat = %d\n",sat);
    printf("sun = %d\n",sun);

}