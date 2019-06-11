/**************************
my faults:忽略有效人数为零时输出"0\n"。
*************************/
#include<stdio.h>
#include<stdlib.h>

struct _identity {
	char name[6];
	int year;
	int month;
	int day;
} identity[1000005];

int cmp(struct _identity aa, struct _identity bb)
{
	if(aa.year > bb.year) return 1;
	if(aa.year < bb.year) return -1;
	if(aa.month > bb.month) return 1;
	if(aa.month < bb.month) return -1;
	if(aa.day > bb.day) return 1;
	if(aa.day < bb.day) return -1;
	else return 0;
} 

int main()
{
	int N = 0, i = 0, j = 0, validcount, flag1, flag2;
	long long birth;
	struct _identity max, min;
	
	scanf("%d", &N);
	for(; j < N; j++, i++)
	{
		fflush(stdin);
		scanf("%s %d/%d/%d", identity[i].name, &(identity[i].year), &(identity[i].month), &(identity[i].day));
		birth =  identity[i].year * 10000 + identity[i].month * 100 + identity[i].day;
		if(birth < 18140906 || birth > 20140906)
		{
			i--;
		}
	/*	if(identity[i].year < 1814 || identity[i].year > 2014)
		{
			i--;
		}
		else
		{
			if(identity[i].year == 2014 && identity[i].month > 9)
			{
				i--;
			}
			else
			{
				if( identity[i].year == 2014 && identity[i].month == 9 && identity[i].day > 6)
				{
					i--;
				}
			}
			
			if(identity[i].year == 1814 &&identity[i].month < 9)
			{
				i--;
			}
			else
			{
				if(identity[i].year == 1814 &&identity[i].month == 9 && identity[i].day < 6)
				{
					i--;
				}
			}
		}*/
			
	}
	
	validcount = i;
	max = identity[0];
	min = identity[0];
	for(i = 0; i < validcount; i++)
	{
		flag1 = cmp(max, identity[i]);
		flag2 = cmp(min, identity[i]);
		if(flag1 == -1)
		{
			max = identity[i];
		}
		if(flag2 == 1)
		{
			min = identity[i];
		}
	}
//	qsort(identity, i, sizeof(identity[0]), cmp);
	/*for(j = 0; j < i; j++)
	{
		printf("%s %d/%d/%d\n", identity[j].name, identity[j].year, identity[j].month, identity[j].day);
	} */
	if(validcount)
	printf("%d %s %s\n", validcount, min.name, max.name);
	else
	printf("0\n");//我的错误 
	return 0;
 } 
