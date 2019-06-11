#include<stdio.h>

void Func(void);

int main(void)
{
	int i, n;

	printf("\ninput a data:");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		/*********Found*********/
		Func();
	}

	return 0;
}

void Func(void)
{
	/*********Found*********/
	static int times=0;

	times++;
	printf("Func() was called %d time(s).\n", times);
}
