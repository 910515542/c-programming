#include<stdio.h>

int main()
{
	int a, b;
	int *p1 = NULL, *p2 = NULL;
	
	a = 2;
	b = 2;
	printf("p1 = %x, p2 = %x\n", p1, p2);
	p1 = &a;
	p2 = p1;
	printf("a = %x, b = %x\n", &a, &b);
	printf("p1 = %x, p2 = %x\n", &p1, &p2);
	return 0;
}
