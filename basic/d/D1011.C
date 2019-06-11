#include<stdio.h>

int main(void)
{
	int i = 0, j = 0, n;

	printf("\ninput numbers:");
	scanf("%d", &n);
	/*********Found*********/
	while (n != 0)
	{
		if (n > 0)
		{
			i++;
		}
		if (n < 0)
		{
			j++;
		}
		/*********Found*********/
		scanf("%d", &n);
	}
	printf("i=%d,j=%d", i, j);

	return 0;
}
