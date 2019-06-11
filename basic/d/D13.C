#include<stdio.h>

int main(void)
{
        char c, Buf[11];
        int pos;

        /*********Found************/
        for (pos = 0; pos < 10; pos++)
        {
                /*********Found************/
                if ((c = getchar()) == '\n')
                {
                        break;
                }
                Buf[pos] = c;
        }
        /*********Found************/
        Buf[pos] = '\0';
        printf("%s\n", Buf);

	return 0;
}
