//write a c program to preform mulitplication two own matrices
#include<stdio.h>
int main()
{
	int a[2][2],b[2][3],c[2][3],i,j,k,r1,r2,c1,c2,r3,c3;
	printf("Enter the size of matrix A");
	scanf("%d%d",&r1,&c1);
	
	printf ("\nenter the size of matrix A");
	scanf("%d%d",&r1,&c1);
	printf("Enter the element of matrix A");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the element of matrix B");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d,&b[i][j]");
		}
	}
	
	if(r1!=c1)
	{
		printf("Matrix multipilcation is not possible");
	}
	else
	{
       	printf("\nThe result of matrix C\n");
    }
	for(i=0;i<r3;i++)
	{
		for(j=0;j<c3;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]=c[i][j] +a [i][k] *b [i][j];	
			}
			printf("\t%d" ,c[i][j]);
		}
		printf("\n");
	}
	
}