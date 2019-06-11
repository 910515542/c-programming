#include<stdio.h>

int main()
{
	int N, Lline, Hline, i, j;
	char c;
	
	scanf("%d %c", &N, &c);
	Lline = N;
	if((Lline * 1.0 / 2) - Lline / 2 >= 0.5)
	{
		Hline = Lline / 2 + 1;
	}
	else
	{
		Hline = Lline / 2;
	}
	for(i = 0; i < Hline; i++)
	{
		if(i == 0 || i == Hline - 1)
		{
			for(j = 0; j < Lline; j++)
			{
				printf("%c", c);
			}
		}
		else
		{
			for(j = 0; j < Lline; j++)
			{
				if(j == 0 || j == Lline - 1)
				{
					printf("%c", c);
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
