#include<stdio.h>
#include<string.h>

int main()
{
	char strnum[1001];
	int count[10] = {0};
	int i, j, len;
	scanf("%s", strnum);
	
	len = strlen(strnum);
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < len; j++)
		{
			if( i == (int)(strnum[j] - '0') )
			{
				count[i]++;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		if(count[i] != 0)
		{
			printf("%d:%d\n", i, count[i]);
		}
	}
	return 0;
}
