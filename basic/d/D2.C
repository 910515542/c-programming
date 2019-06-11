#include<stdio.h>

float fmax(float x, float y);

int main(void)
{
        /*********Found************/
        float l, i;

        l = 3.0;
        i = 5.6f;
        /*********Found************/
        printf("fmax(%5.2f, %5.2f)=%5.2f\n", i, l, fmax(i, l));

	return 0;
}

/*********Found************/
float fmax(float x, float y)
{
        if (x < y) return y;
        else return x;
}
