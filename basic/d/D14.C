#include<stdio.h>

/*********Found************/
void swap(int *x, int *y);

int main(void)
{
        int a = 3, b = 4;

        /*********Found************/
        swap(&a, &b);
        printf("a=%d b=%d\n", a, b);

	return 0;
}

/*********Found************/
void swap(int *x, int *y)
{
        int tmpX;

        /*********Found************/
        tmpX=*x;
        *x = *y;
        /*********Found************/
        *y = tmpX;
}
