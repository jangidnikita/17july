#include<stdio.h>
int main()
{
	char choice,wish;
	printf("enter a for area and v volume:");
	scanf("%c",&choice);
	printf("enter s for square and r for rectangle and t for triangle:");
	scanf("%c",&wish);
	if(choice=='a')
	{
		if(wish=='s')
		{
			int s,area;
			printf("enter value");
			scanf("%d",&s);
			area=s*s;
			printf("area of square=%d",area);
		}
		if(wish=='r')
		{
			int l,b,area;
			printf("enter length and width:");
			scanf("%d %d",&l,&b);
			area=l*b;
			printf("area of rectangle=%f",area);
		}
		if(wish=='t')
		{
			int h,b,area;
			printf("enter heigth and breadth:");
			scanf("%d %d",&h,&b);
			area=1/2*(h*b);
			printf("area of triangle=%f",area);
		}
	}
	else if (choice=='v')
	{
		if(wish=='s')
		{
			int s,volume;
			printf("enter value:");
			scanf("%d",&s);
			volume=s*s*s;
			printf("volume of square=%d",volume);
		}
		if(wish=='r')
		{
			int l,b,w,volume;
			printf("enter length and width:");
			scanf("%d %d %d",&l,&w,&b);
			volume=l*b;
			printf("volume of rectangle=%d",volume);
		}
	}
	if(wish=='t')
	{
		int h,b,volume;
		printf("enter heigth and breadth:");
		scanf("%d %d",&h,&b);
		volume=h*b;
		printf("volume of triangle=%d",volume);
	}	
	else 
	{
		printf("invalid input");
	}
	return 0;
}
