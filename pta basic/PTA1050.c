/*******************************
my faults:1、最后一圈只有一个数时无法赋值 
		  2、运行超时。 

************************************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const void *a, const void *b)
{
	return *((int*)b) - *((int*)a);
}

struct _arr {
	int lie[10000];
} *hang;

int main()
{
	int a, b, i, j, k, n, N, *arr;//行数与列数 
	int temp; 

	scanf("%d", &N);
	arr = (int*)malloc(N * sizeof(int));
	for(i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	//找出行数与列数 
	a = 1;
	b = N;
	for(i = (int)sqrt(N); i <= N && a - b < 0; i++)
	{
		if(N % i == 0)
		{
			a = i;
			b = N / i;
		}
	}
//	printf("a = %d, b = %d\n", a, b); 
	hang = (struct _arr*)malloc(sizeof(struct _arr) * a);
	qsort(arr, N, sizeof(arr[0]), cmp);
	//按螺旋顺时针方向将排好序的arr存进二维数组hang中 
	n = 0;
	k = 1;
	while(n < N)
	{
	//一圈为一个循环，一圈里有四个循环 
		i = k - 1;
		j = k - 1;
	//最后一圈为一个数时赋值 
		if( n == N - 1)
		{
			hang[i].lie[j] = arr[n++];
			break; 
		}
		//填入最上面一行 
		/****************
		在四个while循环里加n < N为了防止在四个循环过程中n > N 
		*****************/
		while(j < b - k && n < N)
		{
			hang[i].lie[j++] = arr[n++];
		}
		//填入最右边一列 
		while(i < a - k && n < N)
		{
			hang[i++].lie[j] = arr[n++];
		}
		//填入下面一行行
		while(j > k - 1 && n < N)
		{
			hang[i].lie[j--] = arr[n++];
		}
		//填入最左边一列	
		while(i > k - 1 && n < N)
		{
			hang[i--].lie[j] = arr[n++];
		}
		k++;
	}
	
	for( i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			if(j == b - 1)
			{
				printf("%d\n", hang[i].lie[j]);
			}
			else
			printf("%d ", hang[i].lie[j]);
		} 
	}
	free(hang);
	free(arr); 
	return 0;
}
