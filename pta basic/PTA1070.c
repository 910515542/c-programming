#include<stdio.h>

int cmp(const void *a, const void *b)
{
	return *((int*)a) - *((int*)b);
}

int main()
{
	int n, i, lenarr[10005];
	int len = 0;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &lenarr[i]);
	}
	qsort(lenarr, n, sizeof(lenarr[0]), cmp);
	for(i = 1, len = lenarr[0]; i < n; i++)
	{
		len = (len + lenarr[i]) / 2;
	}
	printf("%d\n", len);
	return 0;
} 
