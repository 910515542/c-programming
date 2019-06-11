#include<stdio.h>

int main(void)
{
        FILE *fp;
        /*********Found************/
        char fileName[] = "d:\\te.c";

        /*********Found************/
        fp = fopen(fileName, "r");

        /*********Found************/
        if (fp == NULL)
        {
                puts("File Open Error!");
                return 1;
        }
        putchar(fgetc(fp));
        fclose(fp);

	return 0;
}
