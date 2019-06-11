#include<stdio.h>

int main(void)
{
	/*********Found************/
	char *yy = "abcdefghijk";

	while (*yy != '\0')
	{
		putchar(*yy);
		/*********Found************/
		yy+=2;
		if ('\0' == *(yy-1))
		{
			break;
		}
	}

	return 0;
}
