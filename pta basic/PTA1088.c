#include<stdio.h>

double m;

void output(double num)
{
	if(m == num)
	{
		printf(" Ping");
	}
	else
	{
		if(m > num)
		{
			printf(" Gai");
		}
		else
		{
			printf(" Cong");
		}
	}
}

int main()
{
	int i, j, index;
	double k, x, y;
	
	scanf("%lf %lf %lf", &m, &x, &y);
	for(i = 99; i >= 10; i--)
	{
		j = i % 10 * 10 + i / 10;
		k = j / y;
		if(i >= j)
		index = i - j;
		else
		index = j - i;
		if(index / x == k)
		{
			printf("%d", i);
			output((double)i);output((double)j);
			output(k);
			return 0;
		}
	}
	printf("No Solution\n");
	return 0;
}
