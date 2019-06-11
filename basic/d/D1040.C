#include<stdio.h>

int main(void)
{
	char str[80], *pstr;
	int i, j, k, m, e10, digit, ndigit, a[80], *pa;

	printf("Input a string:\n");
	/*********Found************/
	gets(str);

	printf("\n");
	pstr = &str[0]; 		  /* 字符指针pstr置于数组str首地址 */
	/*********Found************/
	pa = a;			   /* 指针pa置于a数组首地址 */
	ndigit = 0; 			 /* ndigit代表有多少个整数 */
	i = 0;					/* 代表字符串中第n个字符 */
	j = 0;					/* 代表连续数字的位数 */
	while (1)
	{
		if ((*(pstr + i) >= '0') && (*(pstr + i) <= '9'))
		{
			j++;
		}
		else
		{
			if (j > 0)
			{
				/*********Found************/
				digit = *(pstr + i - 1) - '0';	 /* 将个位数赋予digit */
				k = 1;
				while (k < j)	/* 将含有两位以上的其他位的数值累计于digit */
				{
					e10=1;
					for (m=1; m<=k; m++)
					{
						e10=e10*10; 	  /* e10代表该位数所应乘的因子 */
					}
					digit = digit + (*(pstr + i - 1 - k) - '0') * e10;	/* 将该位数的数值累加于digit */
					k++;				 /* 位数k自增 */
				}
				/*********Found************/
				*pa = digit; 			   /* 将数值赋予数组a */
				ndigit++;
				pa++;					 /* 指针pa指向a数组下一元素 */
				j = 0;
			}
		}
		if ('\0' == *(pstr + i))
		{
			break;
		}
		i++;
	}

	printf("There are %d numbers in this line.They are:\n", ndigit);
	for(j=0; j<ndigit; j++) 			 /* 显示数据 */
	{
		printf("%d ", a[j]);
	}
	printf("\n");

	return 0;
}
