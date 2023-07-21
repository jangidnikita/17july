#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
    if(n%5==0 && n%11==0)
    {
    	printf("it is divisible by 5 and 11\n");
	}
    else
    {
	    printf("it is not divisible by 5 and 11\n");
	}
	return 0;	
}
