#include<stdio.h>
int main()
{
    int h,e,s,m,cp,total,average;
    printf("Enter your five subjects ");
    scanf("%d %d %d %d %d",&h,&e,&s,&m,&cp);
    if(30>=40)
    {
        printf("average");
    }
    else if(45>=50)
    {
        printf("Grade d");
    }
    else if(50>=60)
    {
        printf("Grade c");
    }
    else if(60>=80)
    {
        printf("Grade b");
    }
    else if(70>=80)
    {
        printf("Grade a");
    }
    else
    {
        printf("fail");
    }
    total=h+e+s+m+cp;
    average=total/2;
    return 0;
}
