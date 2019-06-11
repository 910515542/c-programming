/************************
sscanf() : 从一个字符串中读进与指定格式相符的数据
sprintf() : 字符串格式化命令，主要功能是把格式化的
数据写入某个字符串中 
**************************/
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[1000], str2[1000];
	double temp, sum = 0;
	int i, n, flag = 0, count = 0;
	
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", str1);
		sscanf(str1, "%lf", &temp);
		sprintf(str2, "%.2f", temp);
		flag = 0;
		for(i = 0; i < strlen(str1); i++)
		{
			if(str1[i] != str2[i])
			{
				flag = 1;
				break;
			}
		}
		if(flag || temp < -1000 || temp > 1000)
		{
			printf("ERROR: %s is not a legal number\n", str1);
		}
		else
		{
			count++;
			sum += temp;
		}
	}
	if(count == 1)
	{
    	printf("The average of 1 number is %.2lf\n", sum);
    } else if(count > 1) 
	{
        printf("The average of %d numbers is %.2lf\n", count, sum / count);
    } else 
	{
        printf("The average of 0 numbers is Undefined\n");
    }
	return 0;
}
