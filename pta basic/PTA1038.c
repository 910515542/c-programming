#include<stdio.h>

int main()
{
	int i, a, b, k, N, score[101] = {0};
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a);
		score[a]++;
	}
	scanf("%d", &k);
	for(i = 0; i < k; i++)
	{
		scanf("%d", &b);
		if(i == k - 1)
		{
			printf("%d\n", score[b]);
		}
		else
		{
			printf("%d ", score[b]);
		}
	}
	return 0;
}
