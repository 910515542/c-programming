#include<stdio.h>

int main(void)
{
	char s[10];

	printf("please input your name:");
	/*********Found************/
	scanf("%s", s);

	printf("hello ");
	/*********Found************/
	puts(s);

	return 0;
}
