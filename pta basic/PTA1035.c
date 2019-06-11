#include<stdio.h>
#include<string.h>

//检查[left, right]区间的数组是否有序 
int check(int *arr, int left, int right)
{
	int i;
	
	for(i = left; i < right; i++)
	{
		if(arr[i] > arr[i + 1])
		{
			return 0;
		}
	}
	return 1;
}

//之所以mid需要外界传入，因为mid不一定是（left + right）/ 2 
void mergadd(int *arr, int left, int mid, int right)
{
	int temp[105], i = left, j = mid + 1, k = 0;
	
	while(i <= mid && j <= right)
	{
		if(arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
		}
	}
	while(i <= mid)
	{
		temp[k++] = arr[i++];
	}
	while(j <= right)
	{
		temp[k++] = arr[j++];
	}
	memcpy(arr + left, temp, sizeof(int) * k);
}

//实现下一步归并 
void mergsort(int *arr, int len, int index)
{
	int temp[105], i;
	
	for(i = 0; i < len; i +=  2 * index)
	{
		if(i + 2 * index - 1 >= len)
		{
		//	printf("i = %d, mid = %d, right = %d\n", i, i + index - 1, len - 1);
			mergadd(arr, i, i + index - 1, len - 1);
			break;
		}
		else
		{
		//	printf("i = %d, mid = %d, right = %d\n", i, i + index - 1, i + 2 * index - 1);
			mergadd(arr, i, i + index - 1, i + 2 * index - 1);
		}
	}
}
//进行下一次插入排序 
void insertsort(int *arr, int index)
{
	int i, j, temp;
	
	for(i = 0; i < index; i++)
	{
		if(arr[index] < arr[i])
		{
			temp = arr[index];
			for(j = index - 1; j >= i; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[i] = temp;
			break;
		}
	}
}

int main()
{
	int arr[105];
	int i, j, k = 1, n, flag = 1, idex = 0, cnt = 0, temp;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &temp);
	}
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//从两个元素开始检查该数组是否为归并排序 
	while(1)
	{
		for(i = 0; i < n; i += 2 * k)
		{
			if(i + 2 * k - 1 >= n)
			{
				if(check(arr, i, n - 1) == 0)
				{
					flag = 0;
					break;
				}	
			}
			else
			{
				if(check(arr, i, i + 2 * k - 1) == 0)
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag == 0)
		{
			break;
		}else
		{
			idex = k;
		}
		k *= 2;
	}
	if(idex)//如果index不为零则为归并排序 
	{
		idex *= 2;
	//	printf("%d\n", idex);
		mergsort(arr, n, idex);
		printf("Merge Sort\n");
		for(i = 0; i < n; i++)
		{
			printf("%s%d", cnt++?" ":"", arr[i]);
		}
	}
	else
	{
		for(i = 1; i < n; i++)
		{
			if(check(arr, 0, i) == 0)
			{
				insertsort(arr, i);
				printf("Insertion Sort\n");
				for(j = 0; j < n; j++)
				{
					printf("%s%d", cnt++?" ":"", arr[j]);
				}
				break;
			}
		}
	}
	return 0;
}
