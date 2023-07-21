#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
    if(n%3==0&&n%7==0)
    {
    	printf("it is divisible by 3 and 7");
	}
	else
	{
    	printf("it is not divisible by 3 and 7");
	}
	return 0;
}
