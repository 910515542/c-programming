#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
	return *((int*)a) - *((int*)b);
}

int a[100000], b[100000], people[100000] = {0};
//男， 女 ，在场的客人的数组值不为0，否则为0 

int main()
{
	int x, y, n, m, temp, arr1[10005], arr2[10005];
	int i = 0, j = 0, count = 0, flag = 0;
	
	//没有对象的数组值为-1，有则是其对象编号 
	for(i = 0; i < 100000; i++)
	{
		a[i] = -1;
		b[i] = -1;
	}
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		a[x] = y;
		b[y] = x;
	}
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
		people[arr1[i]] = 1;
	}
	for(i = 0; i < m; i++)
	{
		temp = arr1[i];
		if(a[temp] == -1 && b[temp] == -1)
		{
			count++;
			arr2[j++] = temp;
		}
		else
		{
			if(a[temp] != -1 && b[temp] == -1)
			{
				if(people[a[temp]] != 1)
				{
					count++;
					arr2[j++] = temp;
				}
			}
			else
			{
				if(people[b[temp]] != 1)
				{
					count++;
					arr2[j++] = temp;
				}
			}
		}
	}
	qsort(arr2, count, sizeof(arr2[0]), cmp);
	printf("%d\n", count);
	for(i = 0; i < count; i++)
	{
		printf("%s%05d", flag++?" ":"", arr2[i]);
	}
	return 0;
}
