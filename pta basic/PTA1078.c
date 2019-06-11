#include<stdio.h>
#include<string.h>

int main()
{
	int i, count, j, len;
	char ch, str[1005];
	
	scanf("%c", &ch);
	getchar();
	gets(str);
	len = strlen(str);
	if(ch == 'C')
	{
		for(i = 0; i < len; i++)
		{
			//当为最后一个字符时避免与str[i + 1]判断 
			if(i == len - 1)
			{
				printf("%c", str[i]);
				break;
			}
			if(str[i] != str[i + 1])
			{
				printf("%c", str[i]);
			}
			else
			{
				//计算有多少个重复字符 
				for(j = i, count = 0; j < len; j++)
				{
					if(str[j] == str[i])
					{
						count++;
					}
					else
					{
						break;
					}
				}
				printf("%d%c", count, str[i]);
				//如果一直重复到最后直接结束循环 
				if(j == len)
				break;
				i = j - 1;
			}
		}
	}
	else
	{
		for(i = 0; i < len; i++)
		{
			if(str[i] == '1' && str[i + 1] == '0')
			{
				for(j = 1; j < 10; j++)
				{
					printf("%c", str[i + 2]);
				}
				i++;
			}
			else
			{
				if(str[i] >= '0' && str[i] <= '9')
				{
					for(j = 1; j < str[i] - '0'; j++)
					{
						printf("%c", str[i + 1]);
					}
				}
				else
				{
					printf("%c", str[i]);
				}
			}
		}
	}
	return 0;
}
