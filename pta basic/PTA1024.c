#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char strnum1[10005], strnum2[10005], *p;
	int num[10005] = {0};
	int i = 0, j = 0, len1, len2, len3, len4, zhi = 0;
	scanf("%s", strnum1);
	len1 = strlen(strnum1);
	for(i = 0; i < len1; i++)
	{
		if(strnum1[i] >= '0' && strnum1[i] <= '9')
		{
			strnum2[j] = strnum1[i];
			j++;
		}
		if(strnum1[i + 1] == 'E')
		{
			break;
		}
	}
	len4 = j;//数字长度 
	p = strchr(strnum1, 'E');
	len2 = strlen(p);//E后面的字符长度
//	printf("len2 = %d\n", len2); 
	j = 0;
	for(i = 2; i < len2; i++)
	{
		num[j] = (int)(p[i] - '0');
		j++;
	}
	len3 = j;//指数字符长度 
//	printf("len3 = %d\n", len3);
	for(i = 0; i < len3; i++, j--)
	{
		zhi = zhi + num[i] * (int)pow(10, j - 1);//指数大小 
	//	printf("%d\n", (int)pow(10, j - 1));
	}
//	printf("zhi = %d\n", zhi);
	if(strnum1[0] == '-')
	{
		printf("-");
	}
	if(p[1] == '+')
	{
		for(i = 0; i < len4; i++)
		{
			printf("%c", strnum2[i]);
			if(i == zhi && i != len4 - 1)
			{
				printf(".");
			}
		}
		for(i = 0; i < zhi - len4 + 1; i++)
		{
			printf("0");
		}
	}
	if(p[1] == '-')
	{
		for(i = 0; i < zhi; i++)
		{
			if(i == 1)
			{
				printf(".");
			}
			printf("0");
		}
		if(i == 1)
		{
			printf(".");
		}
		for(i = 0; i < len4; i++)
		{
			printf("%c", strnum2[i]);
		}
	}
	return 0;
}
