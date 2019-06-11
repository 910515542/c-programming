#include<stdio.h>

int main()
{
	int num;
	int i, flag, count = 0;
	
	scanf("%d", &num);
	flag = num;
	while(flag != 1)
	{
		if(flag % 2 == 0)
		{
			flag /= 2;
		}
		else
		{
			flag = (3 * flag + 1) / 2;
		}
		count++;
	}
	printf("%d\n", count);
	return 0;
}
