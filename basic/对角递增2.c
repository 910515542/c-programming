#include<stdio.h>
int main()
{
	int i, j, n;
	printf("ÇëÊäÈëĞĞÊı£º");
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i <= j)
			{
				printf("%-2d",i);
			}
			else
			{
				printf("%-2d",j);
			}
		}
		printf("\n");
	}
	return 0;
 } 
