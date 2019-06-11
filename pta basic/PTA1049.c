/**************************
my faults:1、暴力循环超时。
		  2、规律公式：sum+=(i+1)*a[i]*(n-i); 
**************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	double *arr, sum = 0;
	int N, n = 0, i = 0, k = 1;
	
	scanf("%d", &N);
	arr = (double*)malloc(sizeof(double) * N);
	for(i = 0; i < N; i++)
	{
		scanf("%lf", &arr[i]);
		sum += (i+1)*arr[i]*(N-i); 
	}
/*	while(n < N)
	{
		k = n + 1;
		while(k <= N)
		{
			for(i = n; i < k; i++)
			{
				sum += arr[i];
			}
		//	printf("sum = %.2f\n", sum);
			k++;
		}
		n++;
	}*/ 
	printf("%.2f\n", sum);
	return 0;
}
