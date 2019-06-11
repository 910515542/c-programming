#include<stdio.h>

int main()
{
	int a, b, answer1, temp, flag = 1;
	
	scanf("%d %d", &a, &b);
	answer1 = a * b;
	while(answer1 > 0)
	{
		temp = answer1 % 10;
		if(flag)
		{
			if(temp != 0)
			{
				printf("%d", temp);
				flag = 0;
			}
		}
		else
		{
			printf("%d", temp);
		}
		answer1 /= 10;
	}
	return 0;
}
