#include<stdio.h>

int main(void)
{
	long int i = 79870, j = 23;

	/*****Found*****/
	scanf("%ld", &i);

	/*****Found*****/
	if (j == i)
	{
		printf("Equal!");
	}
	else
	{
		printf("Not equal!");
	}

	return 0;
}
