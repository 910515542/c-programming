#include<stdio.h>

void swap(int *x, int *y);

int main(void)
{
        int a = 3, b = 4;

        /*********Found************/
        swap(&a, &b);
        /*********Found************/
        printf("a=%d b=%d\n", a, b);

	return 0;
}

void swap(int *x, int *y)
{
        int *tmp, tsX;

        /*********Found************/
        tsX = *x;
        *x = *y;
        /*********Found************/
        *y = tsX;
}
