#include<stdio.h>
int main()
{
	int a=30;
	int b=40;
	int c;
	printf("the real value of a is : %d \n ",a);
	printf("the real value of b is : %d \n ",b);
	c=a;
	a=b;
	b=c;
	printf("the swap value of a is : %d \n ",a);
	printf("the swap value of b is : %d \n ",b);
	return 0;
}
