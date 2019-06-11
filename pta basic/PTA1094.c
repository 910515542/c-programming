#include<stdio.h>
#include<math.h>

int check(int num);

int main()
{
	int len, k, i, j, count, temp;
	char num[1005];
	
	scanf("%d %d", &len, &k);
	getchar();
	scanf("%s", num);
	for(i = 0; i < len; i++)
	{
		if(i + k - 1 < len)
		{
			count = k - 1;
			temp = 0;
			for(j = i; j < i + k; j++)
			{
				temp += (int)(num[j] - '0') * pow(10, count);
				count--;
			}
			if(check(temp))
			{
				printf("%0*d\n", k, temp);
				return 0;
			}
		}
	}
	printf("404\n");
	return 0;
}

int check(int num)
{
	int i;
	
	for(i = 2; i <= pow(num, 0.5); i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
