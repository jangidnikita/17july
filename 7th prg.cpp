#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("a is max");
	}
	else if(b>a)
	{
		printf("b is max");
	}
	else
	{
		printf("please enter vaild value");
	}
	return 0;
}
