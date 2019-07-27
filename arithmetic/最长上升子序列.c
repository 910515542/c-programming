#include<stdio.h>
/*************************** 
功能：计算一段序列的最长上升子序列长度 
***************************/
#include<string.h>

int data[100];   //用于动态规划储存已计算过的数据 
int arr[100];    //存放输入的序列 

int maxlen(int index) //计算一个数列以第index个数为终点时的最长上升序列长度 
{
	int i = 1, max = 0, temp = 0;
	
	if(data[index] != -1)
	{
		return data[index];
	}
	if(index == 1)
	{
		data[index] = 1;
		return 1;
	}

	for(i; i < index; i++)     //遍历数列第index数前的数，在终点数比第index数小的数中找出终点数最长上升序列长度 
	{
		if(arr[i - 1] <= arr[index - 1])
		{
			data[i] = maxlen(i);
			if(max < data[i])
			{
				max = data[i];
			}
		}
	}
	return max + 1;      //第index个数最长序列长度则为前面最大的max加上自己本身，即max+1 
}

int main()
{
	int i, len, max = 1;
	 
	memset(data, -1, sizeof(data));
	scanf("%d", &len);
	for(i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 1; i <= len; i++) //分别计算以序列各个数为终点的最长上升序列长度，最大的则是该序列最长上升子序列长度 
	{
		if(maxlen(i) > max)
		{
			max = maxlen(i);
		}
	}
	printf("该序列最长子上升子序列长度为：%d\n",max);
	return 0;
}
