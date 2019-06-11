#include<stdio.h>
#include<string.h>

struct {
	char sphere;
	int num;
} strw[70], strr[70];

#define Len 62 

int main()
{
	int i, j, lenw, lenr, morecount = 0, lesscount = 0;
	char want[1005], reality[1005], c;

	for(i = 0, j = 0; j < 75; i++, j++)
	{
		strw[i].sphere = '0' + j;
		strr[i].sphere = '0' + j;
		strw[i].num = 0;
		strr[i].num = 0;
		if(j == 9)
		{
			j += 7;
		}
		if(j == 42)
		{
			j += 6;
		}
	}
	i = 0;
	while((c = getchar()) != '\n')
	{
		reality[i++] = c;
	}
	i = 0;
	while((c = getchar()) != '\n')
	{
		want[i++] = c;
	}
	lenw = strlen(want);
	lenr = strlen(reality);
	for(i = 0; i < lenw; i++)
	{
		for(j = 0; j < Len; j++)
		{
			if(want[i] == strw[j].sphere)
			{
				strw[j].num++;
			}
		}
	}
	for(i = 0; i < lenr; i++)
	{
		for(j = 0; j < Len; j++)
		{
			if(reality[i] == strr[j].sphere)
			{
				strr[j].num++;
			}
		}
	}
	for(i = 0; i < Len; i++)
	{
		if(strr[i].num - strw[i].num < 0)
		{
			lesscount += (strr[i].num - strw[i].num);
		}
		else
		{
			morecount += (strr[i].num - strw[i].num);
		}
	}
	
	if(lesscount < 0)
	{
		printf("No ");
		printf("%d\n", 0 - lesscount);
	}
	else
	{
		printf("Yes ");
		printf("%d\n", morecount);
	}
	return 0;
}
