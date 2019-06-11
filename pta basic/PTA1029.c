#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, k, m, len1, len2, len3;
	char str1[81], str2[81], str3[81] = {'\0'};
	scanf("%s %s", str1, str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	for(i = 0, m = 0, j = 0; i < len1; i++)
	{
		if(str1[i] == str2[j])
		{
			j++;
		}
		else
		{
			if(str1[i] >= 'a' && str1[i] <= 'z')
			{
				str1[i] -= 32;
			}
			len3 = strlen(str3);
			for(k = 0; k < len3; k++)
			{
				if(str1[i] == str3[k])
				{
					break;
				}
			}
			if(k == len3)
			{
				str3[m] = str1[i];
				m++;
				str3[m] = '\0';
			}
		}
	}
	printf("%s\n", str3);
	return 0;
}
