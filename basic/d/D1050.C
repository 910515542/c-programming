#include <stdio.h>

int main(void)
{
	int JC[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	int i, sum, x;

	for (i=100; i<1000; i++)
	{
		sum = 0;
		x = i;
		/*********Found************/
		while (x!=0)
		{
			sum += JC[x%10];
			x /= 10;
		}
		if (i == sum)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}
