#include <stdio.h>
#include <string.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=2, lineLen<=80, �������ڱ��к����Ӵ��롢���2�С��г�<=80�ַ�) */
int input(char *pStr[50], char str[50][9]);
void find(char *pStr[50], int Count, int *max);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

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

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
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