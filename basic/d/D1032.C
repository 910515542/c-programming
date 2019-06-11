#include<stdio.h>
#include<stdlib.h>

void month_day(int year, int yearday, int *pmonth, int *pday);

int main(void)
{
	int year, yearday;
	int *pmonth, *pday;

	pmonth = (int *)malloc(sizeof(int));
	pday = (int *)malloc(sizeof(int));
	printf("Please input year:");
	scanf("%d", &year);
	printf("Please input yearday:");
	scanf("%d", &yearday);

	/*********Found************/
	month_day(year, yearday, pmonth, pday);
	printf("month=%d,day=%d\n", *pmonth, *pday);

	return 0;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{ 
	static int day_tab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
								{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
	int k, leap;

	/*********Found************/
	leap = (year % 4==0 && year % 100 != 0 )|| year % 400 == 0;
	for (k=1; yearday>day_tab[leap][k]; k++)
	{
		yearday -= day_tab[leap][k]; 
	}

	/*********Found************/
	*pmonth = k;    
	*pday = yearday;
}
