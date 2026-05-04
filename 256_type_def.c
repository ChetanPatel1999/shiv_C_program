// typdef :- it is a user defind data type.
//  its used to change temprary name of primitive data types.
#include <stdio.h>
typedef long long int lli;
typedef long double ld;
typedef char c;
struct student_of_10th_class_section_b
{
    int rno;
    int fees;
};

typedef struct student_of_10th_class_section_b s10b;

void main()
{
    lli a;
    ld b;
    c ch;
    s10b s1;
    printf("size of long long int = %d\n", sizeof(a));
    printf("size of long Double = %d\n", sizeof(b));
    printf("size of char = %d\n", sizeof(ch));
    printf("size of student = %d\n", sizeof(s1));
}