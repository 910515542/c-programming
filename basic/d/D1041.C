#include <stdio.h>

#define MAX 2147483647

int main(void)
{
	long i;
	int j;

	printf("请输入一个长整型数:");
	do
	{
		/*********Found************/
		scanf("%ld", &i);
		if (i>MAX || i<999)
		{
			printf("数据输入错误，请重新输入:");
		}
	} while (i>MAX || i<999);

	for (j=999; j>=100; j--)
	{
		if (i%j == 0)
		{
			printf("%ld的最大的三位数约数是:%d\n", i, j);
			/*********Found************/
			break;
		}
	}

	return 0;
}
