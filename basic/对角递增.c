#include<stdio.h>
int main()
{
	int i, j, k, n;
	printf("«Î ‰»Î–– ˝£∫");
	scanf("%d",&n);
	for(j = 0; j < n; j++)
	{
		k = 1;
		for(i = 0; i < n; i++)
		{
			if(i > j)
			{
				printf("%-4d", i-k);
				k++;
			}
			else
			{
				printf("%-4d", i);
			}
		}
		printf("\n");
	}
	return 0;
}
