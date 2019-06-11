#include<stdio.h>
void myself()
{
	printf("姓名及学号：尹小轩，2018081104\n");
	printf("专业及班级：软件工程183班\n");
	printf("爱好及座右铭：游泳，没有方向的船舶，它永远遇不到顺风\n");
	
}
void DisplayDigit()
{
	int x;
	printf("please input a number:\n");
	scanf("%d",&x);
	printf("%d\n",x);
}

void AddTwo()
{
	int a,b;
	printf("please input two number:\n");
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);
}
int main()
{
	myself();
	DisplayDigit();
	AddTwo();
	return 0;
}
