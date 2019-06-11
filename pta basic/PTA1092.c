#include<stdio.h>
#include<stdlib.h>

struct {
	int count[1005];
} city[105];

struct _sumcount_ {
	int sum;
	int id;
} sumcnt[1005];

int cmp(const void *a, const void *b)
{
	struct _sumcount_ *aa = (struct _sumcount_*)a;
	struct _sumcount_ *bb = (struct _sumcount_*)b;
	if(aa->sum < bb->sum) return 1;
	if(aa->sum > bb->sum) return 0;
	if(aa->id > bb->id) return 1;
	else return 0;
}

int main()
{
	int n, m, i, j, flag = 0, max;
	//n:月饼种类数，m：城市数量 
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++)
	{
		sumcnt[i].sum = 0;
		sumcnt[i].id = i + 1;
	}
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &city[i].count[j]);
			sumcnt[j].sum += city[i].count[j];
		}
	}
	/*qsort(sumcnt, n, sizeof(sumcnt[0]), cmp);
	printf("%d\n", sumcnt[0].sum);
	for(i = 0; sumcnt[i].sum == sumcnt[0].sum; i++)
	{
		printf("%s%d", flag++?" ":"", sumcnt[i].id);
	}*/
	max = sumcnt[0].sum;
	for(i = 0; i < n; i++)
	{
		if(max < sumcnt[i].sum)
		{
			max = sumcnt[i].sum;
		}
	}
	printf("%d\n", max);
	for(i = 0; i < n; i++)
	{
		if(sumcnt[i].sum == max)
		{
			printf("%s%d", flag++?" ":"", sumcnt[i].id);
		}
	}
	return 0;
}
