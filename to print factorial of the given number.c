/*write a c programe to print the factorial of the given number*/
#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("enter any positive integer");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("the factorial is %d",fact);
}