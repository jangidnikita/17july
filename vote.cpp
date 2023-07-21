#include<stdio.h>
int main()
{
	int age;
	printf("enter the age :");
	scanf("%d",&age);
	if(age>18)
	{
		printf("vaild for vote");
	}
	else 
	{
		printf("not vaild for vote");
	}
	return 0;
}
