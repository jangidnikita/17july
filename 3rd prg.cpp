#include<stdio.h>
int main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	if(num==1)
	{
		printf("sunday");
	}
	else if(num==2)
	{
		printf("monday");
	}
	else if (num==3)
	{
		printf("tuesday");
	}
	else if (num==4)
	{
		printf("wednesday");
	}
	else if (num==5)
	{
		printf("thursday");
	}
	else if (num==6)
	{
		printf("friday");
	}
	else if (num==7)
	{
		printf("saturday");
	}
	else 
	{
		printf("this is not week");
	}
	return 0;
}
