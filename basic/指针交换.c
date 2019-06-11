#include<stdio.h>
int main()
{
	int a,b;
	int *p1=&a;
	int *p2=&b;
	int *p=0;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("a=%d,b=%d\n",a,b);
	printf("max=%d,min=%d",*p1,*p2);
	return 0;
 } 
