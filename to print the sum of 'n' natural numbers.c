/*write a c programe to print sum of n natural numbers*/

#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("enter any positive integer");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("the sum is %d",sum);
}