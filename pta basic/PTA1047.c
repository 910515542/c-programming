#include<stdio.h>

struct {
	int DWnum;
	int DYnum;
	int score;
} member[10001];

int main()
{
	int Sumscore[1001] = {0}, N, i, j, flag = 1;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d-%d %d", &member[i].DWnum, &member[i].DYnum, &member[i].score);
	}
	for(i = 1; i < 1001; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(member[j].DWnum == i)
			{
				Sumscore[i] += member[j].score;
			}
		}
		if(Sumscore[flag] < Sumscore[i])
		{
			flag = i;
		}
	}
	printf("%d %d\n", flag, Sumscore[flag]);
	return 0;
}
