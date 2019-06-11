#include<stdio.h>

void input(int fenzi1, int fenzi2, char flag);

int main()
{
	int fenzi1, fenmu1, fenzi2, fenmu2;
	int a, b, c;
	scanf("%d/%d %d/%d", &fenzi1, &fenmu1, &fenzi2, &fenmu2);
	a = fenmu1 * fenmu2;
	b = fenzi1 * fenmu2;
	c = fenzi2 * fenmu1;
	if((b + c) > a)
	{
		
	}
	return 0;
}

void input(int fenzi1, int fenzi2, char flag)
{
	if(fenzi1 < 0 && fenzi2 > 0)
	{
		printf("(%d) %c fenzi2 = ");
	}
	else
	{
		if(fenzi1 < 0 && fenzi2 < 0)
		{
			printf("(%d) %c (%d) = ");
		}
		else
		{
			if(fenzi1 > 0 && fenzi2 > 0)
			{
				printf("%d flag %d = ");
			}
			else
			{
				printf("%d flag (%d) = ");
			}
		}
	}
}
