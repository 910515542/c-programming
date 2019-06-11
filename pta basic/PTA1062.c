/******************
my faults:¸ñÊ½´íÎó£¬ 
********************/
#include<stdio.h>

int find(int a, int b)
{
	return b == 0?a:find(b, a%b);
}

int main()
{
	int n1, m1, n2, m2, k, flag = 0, i, b, c, d;
	double num, num1, num2, temp;
	
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	c = k;
	num1 = n1 * 1.0/m1;
	num2 = n2 * 1.0/m2;
	if(num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	} 
	for(i = 1, flag = 0; i * 1.0/ k< num2; i++)
	{
		num = i * 1.0/k;
		d = i;
		c = k;
		if(num > num1 && num < num2)
		{
			b = find(d, c);
			d /= b;
			c /= b;
			if(c == k)
			{
				printf("%s%d/%d", flag++ ?" ":"", d, c);
			}
		}
	}
	return 0;
}
