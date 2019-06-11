#include<stdio.h>
#include<string.h>
#include<math.h>

double translate(char *str)
{
	char *p = strchr(str, '.');
	int sumlen = strlen(str), i = 0, len = 0, num;
	double sum = 0;
	for(i = 0; i < sumlen; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		len++;
		else
		if(str[i] == '.')
		break;
	}
	for(i = 0; i < sumlen; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			num = (int)(str[i] - '0');
			sum += ( num * pow(10, len - 1) );
			len--;
		}
	}
	if(str[0] == '-')
	{
		sum *= -1;
	}
	return sum; 
}

int flag(char *str)
{
	char *p = strchr(str, '.');
	int flag = 1, i, len = strlen(str), count = 0;
	
	for(i = 0; i < len; i++)
	{
		if( str[i] < '0' || str[i] > '9' )
		{
			flag = 0;
			if( str[i] == '-' && i == 0 && (str[i + 1] >= '0' && str[i + 1] <= '9') )
			{
				flag = 1;
			}
			if(str[i] == '.' && i != 0 && i != len - 1 && count < 1)
			{
				flag = 1;
				count++;
			}
		}
		if(flag == 0)
		break;
	}
	if(str[0] == '0' && str[1] == '0')
	{
		flag = 0;
	}
	if(str[1] == '0' && str[2] == '0')
	{
		flag = 0;
	}
	if(flag == 1)
	{
		if(p != NULL)
		{
			if(strlen(p) > 3)
			{
				flag = 0;
			}
		}
	}
	return flag;
}

int main()
{
	double num;
	char str[10];
	
	scanf("%s", str);
	if(flag(str))
	{
		printf("Formal\n");
		num = translate(str);
		printf("%f\n", num);
	}
	else
	{
		printf("Informal\n");
	}
	return 0;
}
