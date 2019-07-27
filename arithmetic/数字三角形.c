#include<stdio.h>
#include<string.h>

int data[100][100], arr[100][100];//data：保存已经计算过的值 arr：存放数字三角形数据 
int n;//行数

int max(int x, int y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int sum(int i, int j)
{
	int x, y;
	if(data[i][j] != -1)//已经计算过 
	{
		return data[i][j];
	}
	if(i == n - 1)
	{
		return arr[i][j];
	}
	
	x = sum(i + 1, j);
	y = sum(i + 1, j + 1);
	data[i][j] = max(x, y) + arr[i][j];
	
	return data[i][j];
}

int main()
{
	int i = 0, j = 0;
	
	printf("输入三角形行数：");
	scanf("%d", &n); 
	memset(data, -1, sizeof(data));
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i + 1; j++)//三角形：第i行输入i + 1个元素 
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("最大路径和为：%d", sum(0, 0));
	return 0;
}
