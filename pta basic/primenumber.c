#include<stdio.h>

int flag(int num);

int main()
{
	int i = 0, j = 0, count = 0;
	int N;
	int num[100000];
	char isprime[1000000] = {0};
	
	scanf("%d", &N);
	for(i = 2; i <= N; i++)
	{
		isprime[i] = 1;
	}
	for( i = 2; i <= N; i++)
	{
		if(isprime[i])
		{
			for(j = i * 2; j <= N; j += i)
			{
				isprime[j] = 0;
			}
		}
	}
	for(i = 2, j = 0; i <= N; i++)
	{
		if(isprime[i])
		{
			num[j] = i;
			j++;
		}
	}
	
	for(i = 0; i < j - 1; i++)
	{
		if(num[i + 1] - num[i] == 2)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
