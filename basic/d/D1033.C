/*排序字符串，若输入：this test terminal，以下程序的输出结果为：terminal test this.*/
#include<stdio.h>
#include<string.h>

#define  MAXLINE 20

void sort(char *pstr[]);

int main(void)        
{
	int i;
	char *pstr[3], str[3][MAXLINE];

	for (i=0; i<3; i++)
	{
		pstr[i] = str[i];
	}

	printf("Please input:");
	for (i=0; i<3; i++) 
	{
		/*********Found************/
		scanf("%s", pstr[i]);
	}

	sort(pstr);
	printf("output:");
	for (i=0; i<3; i++)
	{
		/*********Found************/
		printf("%s\n", pstr[i]);
	}

	return 0;
}

void sort(char *pstr[])
{
	int i, j;
	char *p;

	for (i=0; i<3; i++)
	{
		for (j=i+1; j<3; j++)
		{
			/*********Found************/
			if (strcmp(pstr[i], pstr[j]) > 0)
			{ 
				p = *(pstr+i);
				*(pstr+i) = *(pstr+j);
				*(pstr+j) = p;
			}
		}
	}
}
