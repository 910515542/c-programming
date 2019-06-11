#include<stdio.h>

int main()
{
	int N, i, j = 1;
	double sum = 0;
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
	{
		sum += 1.0/j;
		j += 2;
	}
	printf("sum = %.6f\n", sum);
	return 0;
}
