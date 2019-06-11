#include<stdio.h>

int main(void)
{
	int i, j, k;

	/*********Found************/
	for (i=1; i<5; i++)
	{
		for (j=1; j<5; j++)
		{
			for (k=1; k<5; k++)
			{
				/*********Found************/
				if (i!=k && i!=j && k!=j)
				{
					printf("%d%d%d ", i, j, k);
				}
			}
		}
	}

	return 0;
}
