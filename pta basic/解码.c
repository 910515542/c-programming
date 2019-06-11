#include<stdio.h>

int main()
{
	char str1[61], str2[61], str3[61], str4[61];
	char flag[3] = {'\0'};
	int i = 0, j = 0, count = 0, n = 1;
	
	scanf("%s%s%s%s", str1, str2, str3, str4);
	for( i = 0; str1[i] != '\0' && str2[i] != '\0'; i++ )
	{
		//printf("str1[%d] = %c, str2[%d] = %c\n", i, str1[i], i, str2[i]);
		if( str1[i] == str2[i]  )
		{
			if((str1[i] >= 'A' && str1[i] <= 'Z'))
			{
				flag[j] = str1[i];
				j++;
				if(j == 2)
				{
					break;	
				}
				
			}
		}
	}
	for( i = 0; i < 60; i++ )
	{
		if( (str3[i] == str4[i]) && ( (str3[i] >= 'a' && str3[i] <='z') || (str3[i] >='A' && str3[i] <='Z') ) )
		{
			flag[2] = str3[i];
			count = i;
			break;
		}
	}
	//printf("%c %c %c count = %d\n", flag[0], flag[1], flag[2], count);
	switch(flag[0]) 
	{
		case 'A':printf("MON "); break;
		case 'B':printf("TUE "); break;
		case 'C':printf("WED "); break;
		case 'D':printf("THU "); break;
		case 'E':printf("FRI "); break;
		case 'F':printf("SAT "); break;
		case 'G':printf("SUN "); break;
	}
	//flag[1] = '1';
	//printf("flag[1] = %d\n", flag[1]);
	if(flag[1] >= '0' && flag[1] <= '9')
	{
		printf("0%c:%02d\n", flag[1], count);
	}
	else
	{
		printf("%d:%02d\n", flag[1] - 'A' + 10, count);
	}
	return 0;
}
