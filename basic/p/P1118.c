#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*printf("\nCreate file error!\n")
printf("Input chars: ")
printf("\nWriting file error!\n")
*/

int main()
{
	FILE *fp;
	char ch;
	int flag;
	
	if((fp = fopen("Test.txt", "w+")) == NULL)
	{
		printf("\nCreate file error!\n");
		exit(1);
	}
	
	printf("Input chars: ");
	ch = getchar();
	while(ch != '!')
	{
		if(islower(ch))
		{
			ch = ch - 32;
		}
		flag = fputc(ch, fp);
		if(flag == EOF)
		{
			printf("\nWriting file error!\n");
			fclose(fp);
			exit(2);
		}
		ch = getchar();
	}
	fclose(fp);
	return 0;
}
