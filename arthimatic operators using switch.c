/* Write a C program to perform arthimatic operations using switch*/
#include<stdio.h>
int main()
{
	char op;
	int n1,n2,result;
	printf("Enter any arthimatic operator");
	scanf("%c",&op);
	printf("Enter any two integer numbers");
	scanf("%d%d",&n1,&n2);
	switch(op)
	{
		case'+':
			    result=n1+n2;
			    printf("\nAddition is %d",result);
			    break;
		
		case'-':
			    result=n1-n2;
			    printf("\nSubtraction is %d",result);
			    break;
		
		case'*':
			    result=n1*n2;
			    printf("\nMultiplication is %d",result);
			    break;
			    
		case'/':
			    result=n1/n2;
			    printf("\nDivision is %d",result);
			    break;
		
		case'%':
			    result=n1%n2;
			    printf("\nModulus is %d,result");
			    break;
		
		default:
			printf("\n Enter only arthimatic operators + - * / %");
			
	}
}