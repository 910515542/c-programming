#include<stdio.h>

int main()
{
	int a, b, c, d;
	int num1, num2;
	scanf("%d/%d %d/%d",&a, &b, &c, &d);
	num1 = a*d;
	num2 = c*b;
	if(num1 < num2)
	{
		printf("%d/%d < %d/%d\n", a, b, c, d);
	}
	else
	{
		if(num1 == num2)
		{
		printf("%d/%d = %d/%d\n", a, b, c, d);
		}
		else
		{
			printf("%d/%d > %d/%d\n", a, b, c, d);
		}
	}
	return 0;
}
