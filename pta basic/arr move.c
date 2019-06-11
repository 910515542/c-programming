#include<stdio.h>
#include<stdlib.h>

int main()
{
	int len, n, i, j;
	int flag = 0, num = 1;
	int *arr;
	
	scanf("%d %d", &len, &n);
	arr = (int*)malloc(sizeof(int) * len * 2);
	if(len < n)
	{
		n %= len;
	}
	for(i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	j = len + n - 1;
	for(i = len - 1; i >= 0; i--, j--)
	{
		arr[j] = arr[i];
	}
	for(i = len, j = 0; i < len + n; i++, j++)
	{
		arr[j] = arr[i];
	}
	for(i = 0; i < len; i++)
	{
		if(i == len - 1)
		{
			printf("%d", arr[i]);
		}
		else
		printf("%d ", arr[i]);
	}
	return 0;
 } 
