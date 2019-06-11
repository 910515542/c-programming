#include <stdio.h>

#define  N	20

void fun(int *a, int n, int *odd, int *even);

int main(void)
{
	int a[N] = {1, 9, 2, 3, 11, 6},   i,  n=6, odd, even;

	printf("The original data is : \n" );
	for (i=0; i<n; i++)
	{
		printf("%5d",  *(a + i));
	}
	printf("\n\n");
	/*********Found************/
	fun(a, n, &odd, &even);
	printf ( "The sum of odd numbers:  %d\n", odd );
	printf ( "The sum of even numbers:  %d\n", even );

	return 0;
}

void fun(int *a, int n, int *odd, int *even)
{
	int i, sum_odd=0, sum_even=0;

	for (i=0; i<n; i++)
	{
		/*********Found************/
		if (a[i] % 2 == 0)
		{
			sum_even += a[i];
		}
		else
		{
			sum_odd += a[i];
		}
	}

	*odd = sum_odd;
	*even = sum_even;
}
