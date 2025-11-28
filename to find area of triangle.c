/*Write a C program to find area of triangle*/
#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter the value of base");
	scanf("%f",&base);
	printf("enter the value of height");
	scanf("%f",&height);
	area=(0.5*base*height);
	printf("The area of the triangle is %f",area);
	
}
