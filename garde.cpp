#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float avg;
	printf("enter marks:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>40 && b>40 && c>40 && d>40 && e>40)
	{
		avg=(a+b+c+d+e);
		printf("average=%f\n",avg);
		if(avg>45 && avg<=50)
		{
			printf("D garde");
		}
		else if(avg>50 && avg<=60)
		{
			printf("C garde");
		}
		else if(avg>60 && avg<=80)
		{
			printf("B garde");
		}
		else if(avg>80)
		{
			printf("A garde");
		}
		else
		{
			printf("fail");
		}
	}
	return 0;
}
