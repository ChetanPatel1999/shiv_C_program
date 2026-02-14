// Write a program to convert distance meter into cm.
#include<stdio.h>
void main()
{
    float meter , cm;
	printf("enter distance in meter = ");
	scanf("%f",&meter);
	cm= meter*100;
	printf("distance in cm = %.0f centi-meter",cm);
} 
