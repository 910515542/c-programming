#include<stdio.h>
#include<string.h>

int main()
{
	char huai[200] = {0}, input[100005];
	int i, j, Ilen, Hlen, flag, symbol = 1;
	char c;
	
	i = 0;
	while( (c = getchar()) != '\n')
	{
		huai[i++] = c;
	}
	scanf("%s", input);
	fflush(stdin);
	Ilen = strlen(input);
	Hlen = strlen(huai);
	for(i = 0; i < Hlen; i++)
	{
		if( huai[i] == '+' )
		{
			symbol = 0;
		}
	}
	for(i = 0; i < Ilen; i++)
	{
		flag = 1;
		for(j = 0; j < Hlen; j++)
		{
			if( input[i] == huai[j] || (input[i] >= 'a' && input[i] <= 'z' && (input[i]- 32) == huai[j]) )
			{
				flag = 0;
			}
		}
		if(flag)
		{
			if(input[i] >= 'A' && input[i] <= 'Z')
			{
				if(symbol)
				{
					printf("%c", input[i]);
				}
			}
			else
			{
				printf("%c", input[i]);
			}
		}
	}
	printf("\n");
	return 0;
}
