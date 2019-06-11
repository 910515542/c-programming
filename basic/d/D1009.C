#include<stdio.h>

int main(void)
{
	int x, y;

	scanf("%d", &x);

	switch (x)
	{
		/*********Found************/
		case 1:
			y = 100;
			break;
		/*********Found************/
		case 2:
			y = 200;
			break;
		default:
		/*********Found************/
			y = 0;
			break;
	}
	printf("%d\n", y);

	return 0;
}
