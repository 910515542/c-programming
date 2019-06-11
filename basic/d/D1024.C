#include<stdio.h>

/*********Found*********/
int Average(int x,int y);

int main(void)
{
	int a = 12;
	int b = 24;
	int ave;

	/*********Found*********/
	ave = Average(a, b);
	printf("Average of %d and %d is %d.\n", a, b, ave);

	return 0;
}

/*********Found*********/
int Average(int x,int y)
{
	int result;

	result = (x + y) / 2;

	return result;
}
