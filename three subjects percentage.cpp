#include<stdio.h>
int main()
{
	float eng,hin,maths;
	float total,per;
	int roll;
	printf("enter the roll no. of students:");
	scanf("%d",&roll);
	printf("enter marks of three subjects:\n");
	scanf("%f %f %f",&eng,&hin,&maths);
	total=eng+hin+maths;
	per=(total/300.0)*100;
	printf("ttal marks=%.2f\n",total);
	printf("percentage=%.2f\n",per);
	if(per<36)
	{
		printf("fail");
	}
	else if (per>=36 && per<45)
	{
		printf("3rd division");
	}
	else if (per>=45 && per<60)
	{
		printf("2rd division");
	}
	else if (per>=60 && per<90)
	{
		printf("1st division");
	}
	else
	{
		printf("excellent");
	}
	return 0;	
}

