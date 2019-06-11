#include<stdio.h>
#include<string.h>
 
int main()
{
	int i;
	int sum = 0;
	char num[100] = {0};
	int len = 0;
	int idex[4] = {-1, -1, -1, -1};
	char *name[10] = { "ling", "yi", "er", "san", 
					"si", "wu", "liu", "qi", "ba", "jiu" };
					
	scanf("%s", num);
	len = strlen(num);
	for(i = 0; i < len; i++)
	{
		sum += (num[i] - 48);
	}
	
	i = 0;
	while(sum > 0)
	{
		idex[i] = sum % 10;
		sum /= 10;
		i++;
	}
	for(i = 3; i >= 0; i--)
	{
		if(idex[i] != -1 && i > 0)
		{
			printf("%s ", name[idex[i]]);
		}
		else
		if( i == 0)
		{
			printf("%s\n", name[idex[i]]);
		}
	}
	return 0;
}
