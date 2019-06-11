#include <stdio.h>
#include <string.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=2, lineLen<=80, 考生可在本行后添加代码、最多2行、行长<=80字符) */
int input(char *pStr[50], char str[50][9]);
void find(char *pStr[50], int Count, int *max);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	char *pStr[50], str[50][9];
	int Count=0, max;
	
	printf("****Input strings****\n");
	Count = input(pStr, str);

	printf("\nmax = ");
	find(pStr, Count, &max);
	printf("%s\n", pStr[max]);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int input(char *pStr[50], char str[50][9])
{
	char temp[10];
	int i = 0, count = 0;
	
	scanf("%s", temp);
	while(strcmp(temp, "*End*") != 0)
	{
		count++;
		strcpy(str[i], temp);
		pStr[i] = str[i];
		i++;
		scanf("%s", temp);
	}
/*	for(i = 0; i < count; i++)
	{
		printf("%s\n", str[i]);
	}*/
	
	return count;
}

void find(char *pStr[50], int Count, int *max)
{
	int i = 0, flag;
	
	*max = 0;
	for(i = 0; i < Count; i++)
	{
		flag = strcmp(pStr[*max], pStr[i]);
		if(flag < 0)
		{
			*max = i;
		}
	}
}
