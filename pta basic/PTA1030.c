#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b);

int main()
{
	int i, N, j ,maxnum = 0;
	double min, p;
	double strnum[100005] = {0};
	
	scanf("%d %lf", &N, &p);
	for(i = 0; i < N; i++)
	{
		scanf("%lf", &strnum[i]);
	}
	qsort(strnum, N, sizeof(strnum[0]), cmp);
	
	for(i = 0; i < N; i++)
	{
		min = strnum[i];	
		for(j = i; strnum[j] <= min * p && j < N; j++)
		{
			if( j - i + 1 > maxnum )
			{
				maxnum = j - i + 1;
			}
		}
		if( maxnum >= (N - i - 1) )
		{
			break;
		}		
	}

	printf("%d\n", maxnum);
	return 0;
 } 
 
int cmp(const void *a, const void *b)
{
 	return *((double*)a) - *((double*)b);
}
