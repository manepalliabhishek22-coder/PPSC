/*Write a C program to find average of five subject marks*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	printf("Enter five subject marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5.0;
	printf("/nThe average is %f",avg);
	
}