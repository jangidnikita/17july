#include<stdio.h>
int main()
{
	int h,e,m,c,s;
	float total,per;
	printf("enter marks of five subjects:");
	scanf("%d %d %d %d %d",&h,&e,&m,&c,&s);
	total=h+e+m+c+s;
	per=(total /500.0) * 100;
	printf("toatl marks = %.2f\n",total);
	printf("percentage = %.2f\n",per);
	if(per<=25)
	{
		printf("fail");
	}
	else if (per>25 && per<=45)
	{
		printf("E garde");
	}
	else if (per>45 && per<=50)
	{
		printf("D garde");
	}
	else if (per>50 && per<=60)
	{
		printf("C garde");
	}
	else if (per>60 && per<=80)
	{
		printf("B garde");
	}
	else
	{
		printf("A grade");
	}
	return 0;
}
