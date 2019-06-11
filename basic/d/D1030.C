#include<stdio.h>

int main(void)
{
	int a, b, *p1, *p2, *p;

	printf("input a, b:");
	scanf("%d,%d", &a, &b);

	p1 = &a;
	p2 = &b;
	/*********Found************/
	if (*p1 < *p2)
	{
		p = p1; 
		p1 = p2; 
		p2 = p;
	}

	printf("a=%d b=%d\n", a, b);
	/*********Found************/
	printf("max=%d min=%d\n", *p1, *p2);

	return 0;
}
