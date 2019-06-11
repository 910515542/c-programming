#include <stdio.h>

/*  m: 袋中红球的数目  n: 袋中白球的数目  x: 需要取出的数目  y: 红球至少出现的次数  */
double pro(int m, int n, int x, int y);

int main(void)
{
	int m, n, x;

	printf("请依次输入红球个数、白球个数及要取的球的个数：");
	scanf("%d%d%d", &m, &n, &x);
	printf("红球数目多于白球的概率 = %lf\n",  pro(m, n, x, x/2+1));

	return 0;
}

double pro(int m, int n, int x, int y)
{
	double p1, p2;

	if (y > x)
	{
		return 0;
	}
	if (0 == y)
	{
		return 1;
	}
	if (y > m)
	{
		return 0;
	}
	if (x-n > y)
	{
		return 1;
	}

	/*********Found************/
	p1 = pro(m - 1, n, x - 1, y - 1); //取红球
	/*********Found************/
	p2 = pro(m, n - 1, x - 1,y); //取白球
	return (double)m/(m+n) * p1 + (double)n/(m+n) * p2;
}
