#include<stdio.h>

int main()
{
	int i, n, j = 1;
	int flag = 1;
	double sum = 0;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		sum =sum + flag * 1.0/j;
		flag *= -1;
		j += 3;
	}
	printf("sum = %.3f", sum);
	return 0;
}
