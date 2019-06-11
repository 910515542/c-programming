#include <stdio.h>
#include <malloc.h>
#include <string.h>

void GetMemory(char **ptr, int num);

int main(void)
{
	char *str;
	
	/*********Found************/
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf("%s\n", str);
	/*********Found************/
	free(str);
	
	return 0;
}

void GetMemory(char **ptr, int num)
{
	/*********Found************/
	*ptr = (char *)malloc(sizeof(char) * num);
}
