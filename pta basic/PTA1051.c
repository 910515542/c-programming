/*************************
my faults:为零时输出0.00或0.00i
		  保留两位小数后为零时当作等于零，且原数为负要去负号。ex：-0.001 -> 0.00. 
*********************/
#include<stdio.h>
#include<math.h>

int main()
{
	double r1, p1, r2, p2, a, b;
	
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, & p2);
	a = r1 * r2 * cos(p1 + p2);
	b = r1 * r2 * sin(p1 + p2);
	if(a < 0)
	{
		a *= -1;
		if(a + 0.09 < 0.10)
		{
			a = 0;
		}
		else
		printf("-");
	}
	else
	{
		if(a + 0.09 < 0.10)
		{
			a = 0;
		}
	}
	if(a != 0)
	{
		printf("%.2f", a);
	}
	else
	{
		printf("0.00");
	}

	if(b < 0)
	{
		b *= -1;
		if(b + 0.09 < 0.10)
		{
			b = 0;
		}
		else
		printf("-");
	}
	else
	{
		if(b + 0.09 < 0.10)
		{
			b = 0;
		}
		else
		printf("+");
	}
	if(b != 0)
	printf("%.2fi\n", b);
	else
	printf("+0.00i\n");
	return 0;
} 
