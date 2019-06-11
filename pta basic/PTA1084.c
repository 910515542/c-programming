#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, k, x;//控制递推与数组循环的变量 
	int n, len, count; 
	char str[100000], temp[100000];
	
	scanf("%s %d", str, &n);
	for(i = 1; i < n; i++)
	{
		x = 0;
		len = strlen(str);
		for(j = 0; j < len; j++)
		{
			//计算每个数的次数 
			for(k = j, count = 0; k < len && str[k] == str[j]; k++)
			{
				count++;
			}
			j = k - 1;
			//将描述这个数的次数与其本身放到temp数组中 
			temp[x] = str[j];
			temp[x + 1] = (char)(count + '0');
			x += 2;
		}
		temp[x] = '\0';
		strcpy(str, temp);
	}
	printf("%s\n", str);
	return 0;
}
