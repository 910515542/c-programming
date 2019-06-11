#include<stdio.h>

int main()
{
	int lower, upper;
	int i;
	
	scanf("%d %d", &lower, &upper);
	if(lower > upper)
	{
		printf("invalid.");
	}
	else
	printf("fahr celsius\n");
	for(i = lower; i <= upper; i += 2)
	{
		printf("%d%6.1f\n", i, 5.0*(i-32)/9.0);
	}
	return 0;
 } 
