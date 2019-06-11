#include<stdio.h>

int main(void)
{
	char ch;

	/****Found****/
	ch = getchar();
	/*****Found*****/
	if ('A' <= ch && ch <= 'Z')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}
