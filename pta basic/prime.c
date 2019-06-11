#include<stdio.h>

#define num 500000

int main()
{
	char flag[num];
	int m, n, i = 0, j = 0;
	
	for(i = 2; i < num; i++)
	{
		flag[i] = 1;
	}
	for(i = 2; i < num; i++)
	{
		if(flag[i])
		{
			for(j = i * 2; j < num; j += i)
			{
				flag[j] = 0;
			}
		}
	}

	scanf("%d %d", &m, &n);
	if(m <= n)
	{
		for(i = 2, j = 0; i < num;  i++)
		{
			if(flag[i])
			{
				j++;
				if(j >= m && j <= n)
				{
					if(((j - m + 1) % 10 == 0 || j == n))
					{
						printf("%d\n", i);
					}
					else
					{
						printf("%d ", i);
					}
				}
				if(j == n)
				{
					break;
				}
			}
		}
	}
	else
	{
		printf("0");
	}
	return 0;
}
