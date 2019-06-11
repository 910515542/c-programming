#include<stdio.h>

int check(int num1, int num2);

int main()
{
	int n, i, j, number[25];
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &number[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(check(j, number[i]))
			{
				printf("%d %d\n", j, j * number[i] * number[i]);
				break;
			}
		}
		if(j == 10)
		printf("No\n");
	}
	return 0;
}

int check(int num1, int num2)
{
	int i = 0, arr[5] = {0}, num = num1 * num2 * num2;
	int count, flag = 1;
	
	while(num2 > 0)
	{
		arr[i++] = num2 % 10;
		num2 /= 10;
	}
	count = i;
	i = 0;
	while(count--)
	{
		if(num % 10 != arr[i++])
		{
			flag = 0;
			break;
		}
		num /= 10;
	}
	return flag;
}
