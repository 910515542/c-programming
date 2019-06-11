#include<stdio.h>

int main()
{
	char ch;
	int count = 0, ascii[128] = {0};
	
	while(count < 2)
	{
		ch = getchar();
		if(ch == '\n')
		{
			count++;
			//printf("\n");
		}
		else
		{
			if(ascii[(int)ch] == 0)
			{
				printf("%c", ch);
				ascii[(int)ch]++;
			}
		}
	}
	printf("\n");
	return 0;
}
