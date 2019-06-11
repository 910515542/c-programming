#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, len;
	char str[100];
	
	gets(str);
	len = strlen(str);
	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ')
		{
			for(j = i + 1; j < len && str[j] != ' '; j++)
			{
				printf("%c", str[j]);
			}
			printf("%c", ' ');
		}
	}
	for(i = 0; str[i] != ' '; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}
