/************************
my faults:Œ“TMDœÎ…±»À 
**********************/
#include<stdio.h>

int cmp(const void *a, const void *b)
{
	return *((int*)a) - *((int*)b);
}

int main()
{
	int days, distance[100005];
	int i;
	
	scanf("%d", &days);
	for(i = 0; i < days; i++)
	{
		scanf("%d", &distance[i]);
	}
	qsort(distance, days, sizeof(distance[0]), cmp);
	if(distance[0] > days)
	{
		printf("%d\n", days);
	}
	else
	{
		for(i = days - 1; i >= 0; i--)
		{
			if(distance[i] <= days - i)
			{
				printf("%d\n", days - i - 1);
				break;
			}
		}
	}
	return 0;
}
