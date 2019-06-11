#include<stdio.h>
void Binary(int num)
{
	unsigned int mask=1;
	mask<<=31;
	for( ; mask ; mask>>=1 )
	{
		printf("%d",num&mask?1:0);
	}
	printf("\n");
}
