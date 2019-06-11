#include<stdio.h>

#define N 10

int main(void)
{
        /*********Found************/
        float jieguo = 0;
        int fm;

        for (fm = 1; fm <= N; fm++)
        {
                /*********Found************/
                jieguo += 1 / (float)fm;
        }
        printf("%8.6f\n", jieguo);

	return 0;
}
