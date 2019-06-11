#include<stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	/****Found****/
	switch (n)
	{
		/****Found****/
		case 0:
			printf("Zero\n");
			break;
		default:
			printf("Non-Zero");
			break;
	}

	return 0;
}
