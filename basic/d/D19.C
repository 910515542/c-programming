#include<stdio.h>

#define Yes 1
#define No  0

char *getStrFromBuf(char *Buf, char *Str, char *divStr);
int charInStr(char *Str, char t);

int main(void)
{
        char inBuf[100] = ">how old are/ you?", *point, oneWord[20];
        char divChar[] = " ;?!,.>/\\";

        point = inBuf;
        while (*point)
        {
                /*********Found************/
                point = getStrFromBuf(point, oneWord, divChar);
                if (*oneWord)
                {
                        puts(oneWord);
                }
        }

	return 0;
}

int charInStr(char *Str, char t)
{
        for (; *Str; Str++)
        {
                /*********Found************/
                if (*Str == t)
                {
                        /*********Found************/
                        return Yes;
                }
        }
        /*********Found************/
        return No;
}


char *getStrFromBuf(char *Buf, char *Str, char *divStr)
{
        for (; *Buf; Buf++)
        {
                if (charInStr(divStr, *Buf) == No)
                {
                        break;
                }

        }

        for (; *Buf; Buf++)
        {
                if (charInStr(divStr, *Buf) == Yes)
                {
                        break;
                }
                /*********Found************/
                *Str = *Buf;
                Str++;
        }
        /*********Found************/
        *Str = '\0';

        /*********Found************/
        return Buf;
}
