#include <stdio.h>

int maxiNum = 0;

void dispMaxNum();

int main(void)
{
        int i, oneNumber, maxNumber = 0;

        printf("Please input 10 int number:");
        {
                int maxNumber = 0;
                /*********Found************/
                {
                        for (i = 0; i < 10; i++)
                        {
                                scanf("%d", &oneNumber);
                                if (oneNumber > maxNumber)
                                {
                                        maxNumber = oneNumber;
                                }
                        }
                }
                /*********Found************/
                maxiNum=maxNumber;
        /*********Found************/
        }
        dispMaxNum();

	return 0;
}

void dispMaxNum()
{
        /*********Found************/
        printf("maxNumber=%d\n", maxiNum);
}
