#include<stdio.h>

/*****Found*****/
double average(double x, double y);

int main(void)
{
	int i;
	double score, total;
	double aver;

	printf("Please enter the 1's grade\n");
	scanf("%lf", &total);

	for (i=2; i<=10; i++)
	{
		printf("Please enter the %d's grade\n", i);
		scanf("%lf", &score);
		/*****Found*****/
		total += score;
	}
	aver = average(total, 10);
	printf("The average: %f\n", aver);

	return 0;
}

/*****Found*****/
double average(double x, double y)
{
	return x / y;
}
