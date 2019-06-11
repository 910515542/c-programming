#include<stdio.h>

int main()
{
	char number[10][10] = {'\0'};
	int score1[10] = {0};
	int score2[10] = {0};
	int score3[10] = {0};
	int sum[10] = {0};
	char name[10][10]; 
	int n = 0, i;
	int flag = 0;
	
	scanf("%d", &n);
	for ( i = 0; i < n; i++ )
	{
		scanf("%s", number[i]);
		scanf("%s", name[i]);
		scanf("%d %d %d", &score1[i], &score2[i], &score3[i]);
		sum[i] = score1[i] + score2[i] + score3[i];
	}

	for ( i = 0; i < n; i++ )
	{
		if ( sum[flag] < sum[i] )
		{
			flag = i;
		}
	}
	printf("%s %s %d\n", name[flag], number[flag], sum[flag]);
	return 0;
}
