#include<stdio.h>

int f(int n);

/*****Found*****/
int main(void)
{
	printf("F(7)=%d\n", f(7));

	return 0;
}

int f(int n)
{
	if (n <= 2)
	{
		/*****Found*****/
		return 1;
	}
	return f(n - 1) + f(n - 2);
}
