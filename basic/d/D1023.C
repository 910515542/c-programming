#include<stdio.h>

void outnum(void);

int main(void)
{
	int i;

	for (i=0; i<5; i++)
	{
		/*********Found************/
		outnum();
	}

	return 0;
}

void outnum(void)
{
	/*********Found************/
	static int i = 0;

	i++;
	printf("%d\n", i);
}
