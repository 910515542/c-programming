#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = (int*)malloc(4);
	*p = 2;
	printf("%d\n", *p);
	free(p);
	*p = 3;
	printf("%d\n", *p);
	return 0;
}
