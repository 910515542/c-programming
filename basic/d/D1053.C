#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;

	/*********Found************/
	if (argc != 2)
	{
		printf("the number of arguments not correct\n\n");
		printf("Usage: 可执行文件  filename\n");
		exit(1);
	}

	/*********Found************/
	if ((fp = fopen(argv[1], "w")) == NULL)
	{
		printf("can not open this file\n");
		exit(2);
	}

	for( ;  (ch=getchar()) != '@'  ; )
	{
		/*********Found************/
		fputc(ch, fp);
	}

	fclose(fp);
	return 0;
}