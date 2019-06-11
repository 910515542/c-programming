#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
	return *((int*)a) - *((int*)b);
}
//集装箱单数 
struct {
	int goods[1005];
} arr1[105];
//不相容的货物 
struct {
	int a;
	int b;
} arr2[10005];

int search(int *arr, int len, int a)
{
	int head = 0, last = len - 1, mid, flag = 0;
	
	while(head <= last)
	{
		mid = (head + last) / 2;
		if(arr[mid] < a)
		{
			head = mid + 1;
		}
		else
		{
			if(arr[mid] > a)
			{
				last = mid - 1;
			}
			else
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
}
/*给出货品清单数组及长度，及一对不能在一起的货品编号
 如果清单中存在这对货品，则返回1，否则返回0*/ 
int check(int *arr, int len, int a, int b)
{
	int flag1 = 0, flag2 = 0, flag = 0;
	
	flag1 = search(arr, len, a);
	flag2 = search(arr, len, b);
	if(flag1 && flag2)
	{
		flag = 1;
	}
	return flag;
}

int main()
{
	int	n, m, k;
	int i, j;
	
	scanf("%d %d", &n, &m); 
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &arr2[i].a, &arr2[i].b);
	}
	for(i = 0; i < m; i++)
	{
		scanf("%d", &k);
		for(j = 0; j < k; j++)
		{
			scanf("%d", &arr1[i].goods[j]);
		}
		qsort(arr1[i].goods, k, sizeof(arr1[i].goods[0]), cmp);
		for(j = 0; j < n; j++)
		{
			if(check(arr1[i].goods, k, arr2[j].a, arr2[j].b))
			{
				printf("No\n");
				break;
			}
		}
		if(j == n)
		{
			printf("Yes\n");
		}
	}
	return 0;
}
