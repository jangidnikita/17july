#include<stdio.h>
int main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	if(num>0)
	{
		printf(" positive integer");
	}
	else if (num<0)
	{
		printf("neagtive integer");
	}
	else 
	{
		printf("zero");
	}
	return 0;
}
