#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[5][20], (*p)[20], (*temp)[20];
	int i, j;
	

/*	for(i = 0; i < 5; i++)
	{
		p[i] = arr1[i];
	}*/
	p = arr1;
	for(i = 0; i < 5; i++)
	{
		scanf("%s", arr1[i]);
	}
	for(i = 1; i < 5; i++)
	{
		for(j = 0; j < 5 - i; j++)
		{
			if(strcmp(*(p + j), *(p + j + 1)) > 0)
			{
				temp = p + j;
				p + j= p + j + 1;
				p + j + 1 = temp;
			}
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", *(p + i));
	}
	return 0;
}
