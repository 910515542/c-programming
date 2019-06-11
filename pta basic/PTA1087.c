#include<stdio.h>

int main()
{
	int n, i, count[20000] = {0}, cnt = 0, num1, num2, num3, num;
	
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		num1 = i/2; 
		num2 = i/3;
		num3 = i/5;
		num = num1 + num2 + num3;
		if(count[num] == 0)
		{
			cnt++;
			count[num]++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
