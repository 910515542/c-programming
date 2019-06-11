#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char ch;

	/*********Found************/
	if ((fp = fopen("Exam.txt", "w")) == NULL)
	{
		printf("can not open this file\n");
		exit(0);
	}

	/*********Found************/
	for( ; (ch=getchar()) != '@'; )
	{
		fputc(ch, fp);
	}

	fclose(fp);
	return 0;
}
