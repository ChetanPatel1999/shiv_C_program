#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            i++;//6
            continue;
        }
        printf("%d \n", i);  // 
        i++;//7
    }
}