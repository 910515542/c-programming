#include<stdio.h>

int main()
{
	int i, j, N;
	int sum = 1, s = 0;
	
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
	{
		for(j = i; j > 0; j--)
		{
			sum *= j;
		}
		s += sum;
		sum = 1;
	}
	printf("%d\n", s);
	return 0;
}
