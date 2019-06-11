#include<stdio.h>
#include<string.h> 

int main()
{
	int num1, num2, num3, D;//num1´æÓàÊı
	char strnum1[100], strnum2[100], strnum3[100];
	int i, j, len1, len2, lenmax;
	
	scanf("%s%s", strnum1, strnum2);
	scanf("%d", &D);
	len1 = strlen(strnum1);
	len2 = strlen(strnum2);
	lenmax = len1;
	for(i = 0; i < 100; i++)
	{
		strnum3[i] = 'f';
	}
	if(lenmax < len2)
	{
		lenmax = len2;
	}
	for(i = len1; i < 100; i++)
	{
		strnum1[i] = '0';
	}
	for(i = len2; i < 100; i++)
	{
		strnum2[i] = '0';
	}
	num2 = 0; 
	for(i = lenmax - 1, j = lenmax; i >= 0; i--)
	{
		if(i > len2 - 1)
		{
			num3 = (int)(strnum1[i] - '0') + num2;
			num2 = num3 / D;
			num1 = num3 % D;
			strnum3[j--] = (char)(num1 + '0');
			
		}
		if(i > len1 - 1)
		{
			num3 = (int)(strnum2[i] - '0') + num2;
			num2 = num3 / D;
			num1 = num3 % D;
			strnum3[j--] = (char)(num1 + '0');
		}
		if(i <= len1 - 1 && i <= len2 - 1)
		{
			num3 = (int)(strnum2[i] - '0' + strnum1[i] - '0') + num2;
			num2 = num3 / D;
			num1 = num3 % D;
			strnum3[j--] = (char)(num1 + '0');
		}
	}
	if(num2 != 0)
	{
		strnum3[j--] = (char)(num2 + '0');
	}
	for(i = 0; i < lenmax + 1; i++)
	{
		if(strnum3[i] != 'f')
		{
			printf("%c", strnum3[i]);
		}
	}
	return 0;
}
