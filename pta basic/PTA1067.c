#include<stdio.h>
#include<string.h>

int main()
{
	char ch[21], temp[100];
	int i, n, cnt = 0;
	
	scanf("%s %d", ch, &n);
	getchar();
	while(1)
	{
		gets(temp);
		if(strcmp(temp, "#") == 0)
		{
			break;
		}
		else
		{
			if(strcmp(temp, ch) != 0)
			{
				cnt++;
				if(cnt >= n )
				{
					printf("Wrong password: %s\n", temp);
					printf("Account locked\n");
					break;
				}
				printf("Wrong password: %s\n", temp);
			}
			else
			{
				printf("Welcome in\n");
				break;
			}
		}
	}
	return 0;
}
