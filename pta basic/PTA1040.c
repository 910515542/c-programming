#include<stdio.h>
#include<string.h>

int main()
{
	char str[100005];
	int i, j, len, countP = 0, countPA = 0, countPAT = 0;
	
	scanf("%s", str);
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		//A前面P的个数 
		if(str[i] == 'P')
		{
			countP++;
		}
		if(str[i] == 'A')
		{
			countPA = (countPA + countP) % 1000000007;
		}
		if(str[i] == 'T')
		{
			countPAT = (countPA + countPAT) % 1000000007;
		}
	}
	printf("%d\n", countPAT); 
	return 0;
}
