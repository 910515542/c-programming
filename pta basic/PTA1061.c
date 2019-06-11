#include<stdio.h>

int main()
{
	int stunum, issuenum, issuescore[101], answer[101], student[101][101];
	int i, j, stuscore[101] = {0};
	
	scanf("%d %d", &stunum, &issuenum);
	for(i = 0; i < issuenum; i++)
	{
		scanf("%d", &issuescore[i]);
	}
	for(i = 0; i < issuenum; i++)
	{
		scanf("%d", &answer[i]);
	}
	for(i = 0; i < stunum; i++)
	{
		for(j = 0; j < issuenum; j++)
		{
			scanf("%d", &student[i][j]);
			if(student[i][j] == answer[j])
			{
				stuscore[i] += issuescore[j];
			}
		}
	}
	for(i = 0; i < stunum; i++)
	{
		printf("%d\n", stuscore[i]);
	}
	return 0;
}
