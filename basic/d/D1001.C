#include<stdio.h>

#define T 20

int main(void)
{
	int n;
	/*********Found************/
	float i, j, temp, sum;

	i = 2;
	j = 1;
	sum = 0;
	for (n=1; n<=T; n++)
	{
		sum = sum + i / j;
		temp = i;
		i = i + j;
		j = temp;
	}

	/*********Found************/
	printf("2/1+3/2+5/3+8/5+13/8+...=%5.4f\n", sum);

	return 0;
}
