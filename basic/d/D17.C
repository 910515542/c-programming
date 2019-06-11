#include <stdio.h>

long userLogin(char *userName);

int main(void)
{
        /*********Found************/
        char userName31[31];
        long curUserCnt = 0;

        while (1)
        {
                printf("user %ld, input your Name: ", curUserCnt+1);
                scanf("%s", userName31);
                curUserCnt = userLogin(userName31);
        }

	return 0;
}

long userLogin(char *userName)
{
        /*********Found************/
        static long userNum = 0;

        userNum++;
        printf("welcome user %s. There have %ld users in system.\n",
                        userName, userNum);
        /*********Found************/
        return  userNum;
}
