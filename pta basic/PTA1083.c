#include<stdio.h>

int main()
{
	int n, i, count[10005] = {0}, num[10005];
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if(num[i] >= i + 1)
		{
			count[num[i] - i - 1]++;
		}
		else
		{
			count[i + 1 - num[i]]++;
		}
	}
	for(i = n - 1; i >= 0; i--)
	{
		if(count[i] >= 2)
		{
			printf("%d %d\n", i, count[i]);
		}
	}
	return 0;
}
