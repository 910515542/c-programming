#include<stdio.h>

struct {
	int num;
	int count;
} strnum[10];

int main()
{
	int i, min;//第一个数 
	
	for(i = 0; i < 10; i++)
	{
		strnum[i].num = i;
		scanf("%d", &strnum[i].count);
	}
	for(i = 0; i < 10; i++)
	{
		if(strnum[i].count != 0 && strnum[i].num != 0)
		{
			min = strnum[i].num;
		}
	}
	for(i = 0; i < 10; i++)
	{
		if(strnum[i].count != 0 && strnum[i].num < min && strnum[i].num != 0)
		{
			min = strnum[i].num;
		}
	}
	printf("%d", min);
	strnum[min].count--;
	for(i = 0; i < 10; i++)
	{
		while(strnum[i].count > 0)
		{
			printf("%d", strnum[i].num);
			strnum[i].count--;
		}
	}
	printf("\n"); 
	return 0;
 } 
