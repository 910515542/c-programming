#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[100], substr[100];
    int count = 0;
	
    if (argc != 2)
    {
		printf("error");
		exit(0);
    }

	/*********Found************/
	fp = fopen(argv[1], "r");
	if (NULL == fp)
	{
		printf("file open error\n");         
		exit(0);
	}
	
	printf("Please input the string : ");
	gets(substr);
	
	while (!feof(fp))
	{
		count++;
		str[0] = '\0';
		/*********Found************/
		fgets(str, 100, fp);
		if (strstr(str, substr))
		{
			printf("Line%d : ", count);
			puts(str);
		}
	}
	
	/*********Found************/
	fclose(fp);
	return 0;
}
