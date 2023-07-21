#include<stdio.h>
int main()
{ 
	char alpha;
	printf("enter any alphabet");
	scanf("%d",&alpha);
	if (alpha=='m' || alpha=='M')
	{
		printf("Male");
	}
	else if(alpha=='f' || alpha=='F')
	{
		printf("Female");
	}
	else
	{
		printf("other");
	}
	return 0;
}

