#include<stdio.h>
int main()
{
	int dist,vel,acc,time;
	printf("enter velocity acceleration and time");
	scanf("%d%d%d",&vel,&acc,&time);
	dist= (vel*time)+(acc*time*time)*0.5;
	printf("/nDistance travelled is %d",dist);
}