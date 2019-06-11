#include<stdio.h>

struct {
	int num;
	int score;
} arr1[100005];
struct {
	int Mnum;
	int Sumscore;
} arr2[100005];

int main()
{
	int N, i, j, flag = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &arr1[i].num, &arr1[i].score);
	}
	for(i = 0; i < 100005; i++)
	{
		arr2[i].Mnum = i + 1;
		arr2[i].Sumscore = 0;
	}
	for(j = 0; j < N; j++)
	{
		arr2[arr1[j].num - 1].Sumscore += arr1[j].score;		
	}
	for(i = 0; i < 100005; i++)
	{
		if(arr2[flag].Sumscore < arr2[i].Sumscore)
		{
			flag = i;
		}
	}
	printf("%d %d", flag + 1, arr2[flag].Sumscore);
	return 0;
}
