#include<stdio.h>
#include<string.h>

struct {
	char zimu;
	int count;
} arr[6] =  {
			  {'P', 0}, {'A', 0}, {'T', 0}, 
			  {'e', 0}, {'s', 0}, {'t', 0}
			};

int main()
{
	int i, j, len, flag = 0;
	char str[10005];
	
	scanf("%s", str);
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < 6; j++)
		{
			if(str[i] == arr[j].zimu)
			{
				arr[j].count++;
			}
		}
	}
	while(1)
	{
		flag = 0;
		for( i = 0; i < 6; i++)
		{
			if(arr[i].count > 0)
			{
				printf("%c", arr[i].zimu);
				flag = 1;
				arr[i].count--;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	printf("\n");
	return 0;
}
