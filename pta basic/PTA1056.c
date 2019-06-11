#include<stdio.h>

int main()
{
	int N, i, j, arr[10], num, sum = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < N; i++)
	{
		num = arr[i] * 10;
		for(j = 0; j < N; j++)
		{
			if(j != i)
			sum += (num + arr[j]);
		}
	}
	printf("%d\n", sum);
	return 0;
}
