#include<stdio.h>

int main()
{
	int A[101], a[101], B[101], b[101];
	// ¼×º° ¼×»® ÒÒº° ÒÒ»®
	int flagA, flagB, i, N, numA = 0, numB = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d %d %d %d", &A[i], &a[i], &B[i], &b[i]);
	}
	for(i = 0; i < N; i++)
	{
		flagA = 0;
		flagB = 0;
		if(a[i] == A[i] + B[i])
		{
			flagA++;
		}
		if(b[i] == A[i] + B[i])
		{
			flagB++;
		}
		if(flagA < flagB)
		{
			numA++;
		}
		if(flagA > flagB)
		{
			numB++;
		}
	}
	printf("%d %d\n", numA, numB);
	return 0;
}
