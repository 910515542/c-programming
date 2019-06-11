#include<stdio.h>

int main(void)
{
	int a[2][3]={1, 2, 3, 4, 5, 6}, i, j;
	/*********Found************/
	int (*p)[3];

	p = a;
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{		
			printf("%3d", *(*(p + i) + j));
		}
		printf("\n");
	}	

	return 0;
}
