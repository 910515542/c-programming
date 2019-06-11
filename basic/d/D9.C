#include<stdio.h>
#include<stdlib.h>

int main(void)
{
        /*********Found************/
        char *pch;

        /*********Found************/
        if ((pch = (char *)malloc(100)) == NULL)
        {
                printf("malloc memory fail!\n");
                return 1;
        }
        printf("%p\n", pch);

        /*********Found************/
        free(pch);

	return 0;
}
