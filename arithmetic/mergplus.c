/************************** 
该程序是通过稍微改进归并排序利用分治思想算出一组数列的逆序数个数 
计算时间复杂度为O(nlogn) 

将数组分为两半，两半必须是从大到小排好序，先算出两边各自的逆序数
再计算有多少逆序数是由左边取一个数和右边取一个数构成，三者相加则为
这段数列的逆序数 
*******************************/ 
#include<stdio.h>
#include<string.h>

int array[100];

int mergsortandCount(int *arr, int head, int mid, int last)
{
	int i = head, j = mid + 1, k = 0, count = 0;
	while(i <= mid && j <= last)
	{
		if(arr[i] > arr[j])
		{
			array[k++] = arr[i++];
			count += (last - j + 1);
		}
		else
		{
			array[k++] = arr[j++];
		}
	}
	while(i <= mid)
	{
		array[k++] = arr[i++];
	}
	while(j <= last)
	{
		array[k++] = arr[j++];
	}
	memmove(arr + head, array, k * sizeof(array[0]));//复制到原数组时注意不能直接复制到arr中，因复制到arr+head 
	return count;
}

int count(int *arr, int head, int last)
{
	int mid, count1 = 0, count2 = 0, count3 = 0;
	
	while(head < last)
	{
		mid = head + (last - head) / 2;
		count1 = count(arr, head, mid);					//不能把head用0代替，之后递归头下标不一定是0 
		count2 = count(arr, mid + 1, last);				//第二组开始数组下标为mid + 1，别误写为mid 
		count3 = mergsortandCount(arr, head, mid, last);//不能把head用0代替，之后递归头下标不一定是0 
	/*	printf("head = %d, last = %d\n", head, last);
		for(i = 0; i < 5; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		printf("count3 = %d\n", count3);*/ 
		return count1 + count2 + count3;
	}
	return 0;
}

int main()
{
	int arr[100];
	int i, count1, len;
	
	printf("please input the length:");
	scanf("%d", &len);
	for(i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	count1 = count(arr, 0, len - 1);
	printf("逆序数：%d个\n", count1);
	return 0;
}
