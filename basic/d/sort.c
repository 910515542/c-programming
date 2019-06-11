#include<stdio.h>

int main()
{
	int i, j;
	int temp = 0;
	int location = 0, length = 10;
	int array[10] = {[0] = 1, 2, 3, 4, 5, 6, 6, 67, 8, 9};
	int max = array[0];
	for(i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	//冒泡排序 
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10 - 1 - i; j++)
		{
			if(array[j] < array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	//选择排序 
	for(j = 0; j < 9; j++)
	{
		for(i = 0; i < length; i++)
		{
			if(max < array[i])
			{
				max = array[i];
				location = i;
			}
		}
		
	//	printf("max = %d, location = %d, array[location] = %d, array[length - 1] = %d\n", max, location, array[location], array[length - 1]);
		temp = array[location];
		array[location] = array[length - 1];
		array[length - 1] = temp;
	//	printf("array[location] = %d, array[length - 1] = %d\n", array[location], array[length - 1]);
		length--;//每交换一次下次遍历长度减1 
		max = array[0];//下一次遍历数组寻找最大值需要初始化max 
		
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
