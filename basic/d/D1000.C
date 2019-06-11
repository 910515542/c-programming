#include<stdio.h>

int main(void)
{
	float a, b, c, t;

	printf("please input three numbers:\n");
	/*********Found************/
	scanf("%f%f%f", &a, &b, &c);
	printf("before sort:a=%g,b=%g,c=%g\n", a, b, c);
	if (a > b)
	{
		t = a;
		a = b;
		/*********Found************/
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("after  sort:a=%g,b=%g,c=%g\n", a, b, c);

	return 0;
}
