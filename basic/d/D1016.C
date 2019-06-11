#include<stdio.h>

int main(void)
{
	/*********Found*********/
	int n=5, i, a[5];

	printf("\ninput 5 numbers:");
	/*********Found*********/
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i=n-1; i>=0; i--)
	{
		printf("%d\t", a[i]);
	}

	return 0;
}
