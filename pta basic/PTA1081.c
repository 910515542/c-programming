#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int n, len, i, j, flag1, flag2, flag3;//zimu, shuzi,
	char str[85];
	
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++)
	{
		gets(str);
		flag1 = 0;
		flag2 = 0;
		flag3 = 1;
		len = strlen(str);
		if(len < 6)
		{
			printf("Your password is tai duan le.\n");
		}
		else
		{
			for(j = 0; j < len; j++)
			{
				if(isalpha(str[j]))//有子母 
				flag1 = 1;
				if(isdigit(str[j]))//有数字 
				flag2 = 1;
				if(!(isalnum(str[j])) && str[j] != '.')//有不合法字符 
				{
					flag3 = 0;
					break;
				}
			}
		//	printf("flag1 = %d, flag2 = %d, flag3 = %d\n", flag1, flag2, flag3); 
			if(flag3 == 0)
			{
				printf("Your password is tai luan le.\n");
			}
			else
			{
				if(flag1 && flag2 == 0)
				{
					printf("Your password needs shu zi.\n");
				}
				else
				{
					if(flag1 == 0 && flag2)
					{
						printf("Your password needs zi mu.\n");
					}
					else
					{
						if(flag1 && flag2)
						printf("Your password is wan mei.\n");
					}
				}
			}
		}
	}
	return 0;
}
