#include<Stdio.h>
int main()
{
	char alpha;
	printf("enter any alpha :");
	scanf("%c",&alpha);
	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	return 0;
}
