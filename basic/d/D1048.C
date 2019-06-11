#include <stdio.h>
#include <string.h>

void func(char *str[]);

int main(void)
{
	int i;
	char s[6][1024], *pStr[6];

	printf("ÇëÊäÈë6¸ö×Ö·û´®£º\n");
	for (i=0; i<6; i++)
	{
		gets(s[i]);
		pStr[i] = s[i];
	}

	/*********Found************/
	func(pStr);
	printf("\nÅÅĞòºó£º\n");
	for (i=0; i<6; i++)
	{
		/*********Found************/
		puts(pStr[i]);
	}
	
	return 0;
}

void func(char *str[])
{
	int i, j;
	char *temp;

	for (i=0; i<5; i++)
	{
		for (j=i+1; j<6; j++)
		{
			/*********Found************/
			if (strcmp(str[i], str[j]) > 0)
			{
				temp = str[j];
				str[j] = str[i];
				str[i] = temp;
			}
		}
	}
}
