/*************************
输入的数字个数不限 每个数大小[0,9];
第一行输出出现次数大于5的数字，
第二行输出出现次数大于3的数字
第三行输出出现次数等于1的次数 
*************************/
#include<stdio.h>

void output(int *count);

int main()
{
	int count[10] = {0}, i, n, temp;
	
	printf("输入需要输入的数字个数：");
	scanf("%d", &n);
	printf("请输入%d个数字：", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		count[temp]++;
	}
	output(count);
	return 0;
}

void output(int *count)
{
	int i;
	
	printf("出现了5次以上的数字有： ");
	for(i = 0; i < 10; i++)
	{
		if(count[i] > 5)
		{
			printf("%d ", i);
		}
	}
	printf("\n"); 
	printf("出现了3次以上的数字有：");
	for(i = 0; i < 10; i++)
	{
		if(count[i] > 3)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("只出现一次的数字有：");
	for(i = 0; i < 10; i++)
	{
		if(count[i] == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
