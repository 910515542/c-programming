#include<stdio.h>
#include<string.h>

void vowel(char str1[], char str2[]);

int main(void)
{
	char str1[81], str2[81];

	printf("please input the string:\n");
	gets(str1);

	/*********Found************/
	vowel(str1,str2);
	printf("the vowel string is:\n");
	puts(str2);
	if (strlen(str2) == 0)
	{
		printf("NONE!\n");
	}

	return 0;
}

void vowel(char str1[], char str2[])
{
	int i, j = 0;
	/*********Found************/
	for (i=0; str1[i] != '\0'; i++)
	{
		if (str1[i]=='A' || str1[i]=='E' || str1[i]=='I'
			|| str1[i]=='O'	|| str1[i]=='U' || str1[i]=='a'
			|| str1[i]=='e'	|| str1[i]=='i' || str1[i]=='o'
			|| str1[i]=='u')
		{
			str2[j] = str1[i];
			j++;
		}
	}

	str2[j] = '\0';
}
