#include<stdio.h>

int find(int num);

int main()
{
	int i, n, friendnum[40] = {0}, count = 0, flag = 0, temp;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		friendnum[find(temp)] = 1;
	}

	for(i = 0; i < 40; i++)
	{
		if(friendnum[i] == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	for(i = 0; i < 40; i++)
	{
		if(friendnum[i])
		{
			printf("%s%d", flag++ ?" ":"", i);
		}
	}
	return 0;
}

int find(int num)
{
	int sum = 0;
	while(num > 0)
	{
		sum += (num%10);
		num /= 10;
	}
	return sum;
}
