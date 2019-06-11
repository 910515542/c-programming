#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*将已经有序的两个有序子序列（left - mid与mid+1 - right）
归并排序成一个新的有序子序列 */
void mergadd(int *arr, int left, int mid, int right, int *p)
{
	int i = left, j = mid + 1, k = 0;
	if(arr[mid] > arr[mid + 1])//优化：如果前一个有序数列最后一个元素小于等于后一个有序数列第一个元素则不用归并 
	{
		while(i <= mid && j <= right)
		{
			if(arr[i] < arr[j])
			{
				p[k++] = arr[i++];
			}
			else
			{
				p[k++] = arr[j++];
			}
		}
		while(i <= mid)
		{
			p[k++] = arr[i++];
		}
		while(j <= right)
		{
			p[k++] = arr[j++];
		}
		memcpy(arr+left, p, sizeof(int) * k);
	}
}

void mergsort1(int *arr, int left, int right, int *p, int len)
{
	int i, j, k = 1;
	/*最开始把 数组每个元素看成一个有序数对，进行两两归并，
	形成一个新的有序数对;
	接着下一轮循环把新形成的有序数对两两归并，直到最后只剩下一个有序数对*/ 
	while(1)
	{
		for(j = 0, i = 0; j < len; j += (2 * k), i++)
		{
			if(j + 2 * k - 1 >= len)
			{
				mergadd(arr, j, (j + len - 1) / 2, len - 1, p);
				break;
			}
			else
			{
				mergadd(arr, j, j + k - 1, j + 2 * k - 1, p);
			}
		}
		/*如果归并操作只进行了两次（即i = 1），说明只剩下最后两个有序数对
		则进行最后一次归并即可形成一个有序数列，即可结束循环。*/ 
		if(i == 1)
		{
			mergadd(arr, 0, j - 1, len - 1, p);
			break;
		}
		k *= 2;
	}
}
/*利用递归将数组分成n个单个元素的有序数对，
然后从单个元素有序数对开始归并排序，直到归并成一个有序数对*/ 
void mergsort2(int *arr, int left, int right, int *p)
{
	int mid;
	//优化：如果排序数组长度不大，则用插入排序完成排序，效率更高 
	if(left < right)
	{
		mid = (left + right) / 2;
		mergsort2(arr, left, mid, p);
		mergsort2(arr, mid + 1, right, p);
		mergadd(arr, left, mid, right, p);
	}
}

int main()
{
	int arr[10], i, *p, len;
	
	p = (int*)malloc(sizeof(int) * 11);
	//非递归实现归并排序 
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	mergsort1(arr, 0, 9, p, 10);
	for(i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//测试利用递归实现归并排序 
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	mergsort2(arr, 0, 9, p);
	for(i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

