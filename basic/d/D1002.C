#include<stdio.h>

int main(void)
{
	int x = 5, y = 9;

	x = x + y;
	y = x - y;
	/*****Found*****/
	x = x - y;
	printf("x=%d, y=%d\n", x, y);

	return 0;
}
