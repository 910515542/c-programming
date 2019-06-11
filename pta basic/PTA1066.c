#include<stdio.h>
#include<stdlib.h>
struct _arr {
	int num[505];
} * arr;

int main()
{
	int begin, last, exchange, M, N, i, j;
		
	scanf("%d %d %d %d %d", &M, &N, &begin, &last, &exchange);
	arr = (struct _arr*)malloc(sizeof(struct _arr) * M);
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			scanf("%d", &arr[i].num[j]);
			if(arr[i].num[j] >= begin && arr[i].num[j] <= last)
			{
				arr[i].num[j] = exchange;
			}
		}
	}
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(j == N - 1)
			printf("%03d\n", arr[i].num[j]);
			else
			printf("%03d ", arr[i].num[j]);
		}
	}
	free(arr);
	return 0;
} 
