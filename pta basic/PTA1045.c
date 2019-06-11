/***********************
my faults：由于每个数均不等，确定位置后只需看前面部分该数是不是最大的
			行尾不能有多余空格时应单独拿一行换行，不能%d\n; 
*************************/ 
#include<stdio.h>

int cmp(const void *a, const void *b)
{
	return *((int*)a) - *((int*)b);
}

int main()
{
	int N, i, j, flag, k, max;
	int arr1[100005], arr2[100005], arr3[100005];//存输入，存排序后的输入， 存主元 
	
	scanf("%d", &N);
	if(N > 0)
	{
		for(i = 0; i < N; i++)
		{
			scanf("%d", &arr1[i]);
			arr2[i] = arr1[i];
		}
		max = arr1[0];
	/*	for(i = 0; i < N; i++)
		{
			printf("%d ", arr1[i]);
		}
		printf("\n");*/
		qsort(arr2, N, sizeof(arr2[0]), cmp);
	/*	for(i = 0; i < N; i++)
		{
			printf("%d ", arr2[i]);
		}
		printf("\n");*/
		for(i = 0, j = 0; i < N; i++)
		{
			if(max < arr1[i])
			{
				max = arr1[i];
			}
			if(arr1[i] == arr2[i] && max == arr1[i])//找出原数组中与排序后的数组中位置相同的元素 检查该元素前有没有比它大的，若没有则后面也没有比它小的，则该元素是主元。 	
			{
				arr3[j++] = arr1[i];
			}
		}
	}
	else j = 0;

	printf("%d\n", j);
	for(i = 0; i < j; i++)
	{
		if(i == j - 1)
		{
			printf("%d", arr3[i]);
		}
		else
		{
			printf("%d ", arr3[i]);
		}
	}
	printf("\n");//\n必须放在最后，不能 printf("%d\n", arr3[i]);
	return 0;
 } 
