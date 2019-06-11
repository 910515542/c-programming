#include<stdio.h>

int main()
{
	int a, b;
	int flag = 1;
	while(scanf("%d %d", &a, &b) == 2 && b != 0)
	{
		if(flag)
		{
			printf("%d", a * b);
		}
		else
		{
			printf(" %d", a * b);
		}
		printf(" %d", b - 1);
		flag = 0;
	}
	if(flag)
	{
		printf("0 0");
	}
	return 0;
}
