#include<stdio.h>
#include<string.h>

#define MAX_LINE 5
#define MAX_LINE_LEN 81

/* userCode(<50字符): 自定义函数之原型声明 */
void sortP_Str(char *pstr[MAX_LINE]);

int main(void)        
{
	int i;
	char *pstr[MAX_LINE], str[MAX_LINE][MAX_LINE_LEN];

	for (i=0; i<MAX_LINE; i++)
	{
		pstr[i] = str[i];
	}

	printf("Input 5 strings:\n");
	for (i=0; i<MAX_LINE; i++) 
	{
		gets(pstr[i]);
	}

	sortP_Str(pstr);
	printf("---------------------------\n");
	for (i=0; i<MAX_LINE; i++)
	{
		printf("%s\n", pstr[i]);
	}

	return 0;
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
void sortP_Str(char *pstr[MAX_LINE])
{
	int i, j, flag;
	char *p;
	
	for(i = 1; i < MAX_LINE; i++)
	{
		for(j = 0; j < MAX_LINE - i; j++)
		{
			flag = strcmp(pstr[j], pstr[j + 1]);
			if(flag > 0)
			{
				p = pstr[j];
				pstr[j] = pstr[j + 1];
				pstr[j + 1] = p;
			}
		}
	}
}
