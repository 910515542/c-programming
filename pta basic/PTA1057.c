#include<stdio.h>
#include<string.h>

int main()
{
	char str[100005];
	int i, len, sum = 0, count0 = 0, count1 = 0;
	
	gets(str);
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			sum += ((int)(str[i] - 'a' + 1));
		}
		if((str[i] >= 'A' && str[i] <= 'Z'))
		{
			sum += ((int)(str[i] - 'A' + 1));
		}
	}
	while(sum != 0)
	{
		if(sum % 2 == 0)
		{
			count0++;
		}
		else
		{
			count1++;
		}
		sum /= 2;
	}
	printf("%d %d\n", count0, count1);
	return 0;
}
