#include<stdio.h>

struct {
	char Znum[15];
	int Snum;
	int Knum;
} student[1001];

int main()
{
	int N, M, i, j;
	int forgeted[1001];
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%s %d %d", student[i].Znum, &student[i].Snum, &student[i].Knum);
	}
	scanf("%d", &M);
	for(i = 0; i < M; i++)
	{
		scanf("%d", &forgeted[i]);
	}
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(forgeted[i] == student[j].Snum)
			{
				printf("%s %d\n", student[j].Znum, student[j].Knum);
			}
		}
	}
	return 0;
 } 
