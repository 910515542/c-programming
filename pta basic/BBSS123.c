#include<stdio.h>

int main()
{
	int num, i = 0, j = 0;
	int arr[3] = {-1, -1, -1};
	int name[3] = {[1] = 'S', 'B'};
	scanf("%d", &num);
	while(num > 0)
	{
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	for(i = 2; i >= 0; i--)
	{
		if(arr[i] != -1 && i != 0)
		{
			for(j = 0; j < arr[i]; j++)
			{
				printf("%c", name[i]);
			}
		}
		else
		{
			if(i == 0)
			{
				for(j = 1; j <= arr[0]; j++)
				{
					printf("%d", j);
				}
			}
		}
	}
	return 0;
}
