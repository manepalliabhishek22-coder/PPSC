/* write a C program to find factorial of a given nuumber using recursion function*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter any +ve integer");
	scanf("%d",&n);
	
	printf("factorial is %d ",fact(n));
	
}
int fact(int x)
{
	if(x==1) //base condition
	   return x;
	else
	    return x * fact(x-1); //recursive call
}