/****************************
my faults:位数少的数没有的位应该补"0"! 
********************************/ 
#include<stdio.h>
#include<string.h>

int main()
{
	char strnumA[105], strnumB[105], strnum[105];//以字符串代替两个整数 
	int numA, numB, num, i, n, lenA, lenB;//存strnumA与strnumB的转化后的数字 
	int k = 1;//判断偶数位与奇数位 
	
	scanf("%s%s", strnumA, strnumB);
	lenA = strlen(strnumA);
	lenB = strlen(strnumB);
	//printf("%d %d\n", lenA, lenB);
	for(n = 0; lenA > 0 || lenB > 0; lenA--, lenB--)
	{
		//printf("len : %d %d\n", lenA, lenB);
		if(lenA > 0 && lenB > 0)
		{
			numA = (int)(strnumA[lenA - 1] - '0');
			numB = (int)(strnumB[lenB - 1] - '0');
			//printf("%d %d\n", numA, numB);
		}
		if(lenA <= 0 && lenB > 0)
		{
			numA = 0;
			numB = (int)(strnumB[lenB - 1] - '0');
		//	printf("%d %d\n", numA, numB);
		}
		if(lenA > 0 && lenB <= 0)
		{
			numA = (int)(strnumA[lenA - 1] - '0');
			numB = 0;
			//printf("%d %d\n", numA, numB);
		}
		if((k++) % 2 == 0)
		{
			num = numB - numA;
			if(num < 0)
			num += 10;
			strnum[n++] = (char)(num + '0');//将加密后的字符从个位存进strnum数组中，最后逆序输出strnum； 
		}
		else
		{
			num = (numA + numB) % 13;
			if(num == 10)
			{
				strnum[n++] = 'J';
			}
			if(num == 11)
			{
				strnum[n++] = 'Q';
			}
			if(num == 12)
			{
				strnum[n++] = 'K';
			}
			if(num < 10)
			{
				strnum[n++] = (char)(num + '0');
			}
		}
	}
	//将较长的数字剩余部分依次存进strnum中。
	/* 
	if(j >= 0)
	{
		i = j;
	}
	for(; i >= 0; i--)
	{
		if(lenA > lenB)
		{
			numB = 0;
			numA = strnumA[i];
			if((k++) % 2 == 0)
			{
				num = numB - numA;
				if(num < 0)
				num += 10;
				strnum[n++] = (char)(num + '0');
			}
			else
			{
				num = (numA + numB) % 13;
				if(num == 10)
				{
					strnum[n++] = 'J';
				}
				if(num == 11)
				{
					strnum[n++] = 'Q';
				}
				if(num == 12)
				{
					strnum[n++] = 'K';
				}
				if(num < 10)
				{
					strnum[n++] = (char)(num + '0');
				}
			}
		}
		if(lenA < lenB)
		{
			numB = strnumB[i];
			numA = 0;
			if((k++) % 2 == 0)
			{
				num = numB - numA;
				if(num < 0)
				num += 10;
				strnum[n++] = (char)(num + '0');
			}
			else
			{
				num = (numA + numB) % 13;
				if(num == 10)
				{
					strnum[n++] = 'J';
				}
				if(num == 11)
				{
					strnum[n++] = 'Q';
				}
				if(num == 12)
				{
					strnum[n++] = 'K';
				}
				if(num < 10)
				{
					strnum[n++] = (char)(num + '0');
				}
			}
		}
	}*/
	strnum[n] = '\0';
	//逆序输出strnum，即为加密后的数字。 
	for(i = n - 1; i >= 0; i--)
	{
		printf("%c", strnum[i]);
	}
	printf("\n");
	return 0;
} 
