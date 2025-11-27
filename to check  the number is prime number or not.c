/*write a c program to check wether the given number is prime number or not*/

#include<stdio.h>
int main()
{
	int num, count, i;
	printf("enter any positive number ");
	scanf("%d",&num);        //4
	for (i=1;i<=num;i++)
	{
		if (num%i==0)
		    count++;    //1 2 3
	}
	if (count==2)
	{
	   printf("the given number is prime %d",&num);
}
	else
	{
	   printf("the given number is not prime",&num);
}

}