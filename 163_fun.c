#include <stdio.h>
void fun3()
{
    printf("hi i am fun3\n");
}
void fun1()
{
    printf("hi i am fun1\n");
    fun3();

}
void fun2()
{
    fun1();
    printf("hi i am fun2\n");
    fun1();
    
}
void main()
{
    printf("main fun is start..\n");
    fun2();
    printf("main fun is end..\n");
}