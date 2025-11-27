/*write a C programe to calculate simple instrest and compound intrest*/
#include<stdio.h>
#inlcude<math.h>                       //pow(a,b)    
int main()
{
	float p,t,r,si,ci;
	printf("enter principal amount");
	scanf("%f",&p);
	
	printf("\nEnter time");
	scanf("%f",&t);
	
	printf("\nEnter rate of intrest");
	scanf("%f",r);
	
	
	si = (p*t*r)/100.0;
	ci = p * pow((1+r/100),t)-p;
	printf("\nThe simple intrest is %f",si);
	printf("\nThe compound intrest is %f",ci);
	
}