/* write a Cprograme to print the inverse of the given number*/

#include<stdio.h>
int main()
{
	int num, rev=0, rem;
	printf("enter any positive number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("the inverse number of the given number is %d",rev);
}