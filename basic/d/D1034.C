#include<stdio.h>

int main(void)
{
	int a;
	/*********Found************/
	int *p;

	p = &a;
	/*********Found************/
	scanf("%d", p);
	printf("a=%d\n", *p);

	return 0;
}
