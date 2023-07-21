#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the value of a, b, c, d and e");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b && a>c && a<d && a>e)
	{
		printf("a is max");
	}
	else if (b>a && b>c && b>d && b>e)
	{
		printf("b is max");
	}
	else if(c>a && c>b && c>d && c>e )
	{
		printf("c is max");
	}
	else if(d>a && d>b && d>c && d>e)
	{
		printf("d is max");
	}
	else if(e>a && e>b && e>c && e>d)
	{
		printf("e is max");
	}
	else
	{
		printf("the all values are equal");
	}
	return 0;
}
