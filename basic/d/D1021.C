#include<stdio.h>

/*****Found*****/
int f(int n);

int main(void)
{
	int i;

	for (i=1; i<=5; i++)
	{
		printf("%d\n", f(3));
	}

	return 0;
}

int f(int n)
{
	/*****Found*****/
	static int p = 1;

	p = p * n;
	return p;
}
