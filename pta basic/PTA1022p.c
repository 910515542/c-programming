#include<stdio.h>

int main()
{
	int A, B, len;
	int D, i = 0, sum;
	int arrnum[100] = {0};
	
	scanf("%d %d %d", &A, &B, &D);
	sum = A + B;
	if(sum > 0)
	{
		while(sum > 0)
		{
			arrnum[i++] = sum % D;
			sum /= D;
		}
		len = i;
		for(i = len - 1; i >=0; i--)
		{
			printf("%d", arrnum[i]);
		}
		printf("\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
