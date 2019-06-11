#include<stdio.h>

void q_sort(int *arr, int len)
{
	int i = 0, j = len - 1, key;
	//第一次分区取第一个值为关键值，将数组比关键值小的都放在它的坐边，大的都放在它的右边 
	key = arr[0];
	if(len > 1)//结束递归的条件 
	{
		while(i != j)//i = j即分区完成 
		{
			for(; j > i; j--)
			{
				if(arr[j] < key)
				{
					arr[i] = arr[j];
					break;
				}
			}
			for(; i < j; i++)
			{
				if(arr[i] > key)
				{
					arr[j] = arr[i];
					break;
				}
			}
			arr[i] = key;
		}
		q_sort(arr, i);//对key的两边进行分区 ，不再将key值考虑在内，所以两边长度i + （len - i - 1） ！= len。 
		q_sort(arr + i + 1, len - i - 1);
	}
}

int main()
{
	int arr[10] = {2, 4, 1, 8, 5, 0, 9, 8, 6, 3};
	int i;
	
	q_sort(arr, 10);
	for(i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
