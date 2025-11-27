/*Write a cprograme to perform bitwise operators*/

#include<stdio.h>;
int main()
{
	int a,b;
	printf("enter any two integer numbers");
	scanf("%d%d",&a,&b);
	
	printf("\nBitwise operation of %d & %d = %d",a,b,a&b);
	printf("\nBitwise operation of %d | %d = %d",a,b,a|b);
	printf("\nBitwise operation of %d ^ %d = %d",a,b,a^b);
	printf("\nBitwise operation of %d << %d = %d",a,b,a<<b);
	printf("\nBitwise operation of %d >> %d = %d",a,b,a>>b);
	
}