#include <stdio.h>

int main(void)
{
	int *ptr, i, arrA[10];

	/*********Found************/
	ptr=arrA;
	for (i=0; i<10; i++)
	{
		scanf("%d", ptr++);
	}
	printf("\n");
	/*********Found************/
	ptr=arrA;
	for(i=0;  i<10;  i++, ptr++)
	{
		printf("%d ",*ptr);
	}
	printf("\n");

	return 0;
}

