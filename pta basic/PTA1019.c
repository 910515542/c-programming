#include<stdio.h>

int main()
{
	int num = 0, i = 0, j = 0, num1 = 0, num2 = 0, numstr[5];
	int  temp, k = 0;
	scanf("%d", &num);
	do
	{
	//	printf("num = %d\n", num);
		for(i = 0; i < 4; i++)
		{
			numstr[i] = 0;
		}
		i = 0;
		while(num != 0)
		{
			numstr[i] = num % 10;
			num /= 10;
			i++;
		}
	/*	for(i = 0; i < 4; i++)
		{
			printf("%d\t", numstr[i]);
		}
		printf("\n");*/
		for(i = 1; i < 4; i++)
		{
			for(j = 0; j < 4 - i; j++)
			{
				if(numstr[j] < numstr[j + 1])
				{
					temp = numstr[j];
					numstr[j] = numstr[j + 1];
					numstr[j + 1] = temp;
				}
			}
		}
		/*for(i = 0; i < 4; i++)
		{
			printf("%d\t", numstr[i]);
		}
		printf("\n");*/
		num1 = 0;
		for(i = 0, j = 1000; i < 4; i++, j /= 10)
		{
			num1 += numstr[i] * j;
		}
		for(i = 1; i < 4; i++)
		{
			for(j = 0; j < 4 - i; j++)
			{
				if(numstr[j] > numstr[j + 1])
				{
					temp = numstr[j];
					numstr[j] = numstr[j + 1];
					numstr[j + 1] = temp;
				}
			}
		}
		num2 = 0;
		for(i = 0, j = 1000; i < 4; i++, j /= 10)
		{
			num2 += numstr[i] * j;
		}
		num = num1 - num2;
		printf("%04d - %04d = %04d\n", num1, num2, num);
	}
	while(num != 6174 && num != 0);
	return 0;
}
