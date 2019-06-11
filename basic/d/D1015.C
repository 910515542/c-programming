#include<stdio.h>

void input(int a[], int n);

int main(void)
{
	int a[10], i;

	/*********Found************/
	input(a, 10);
	for (i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}


void input(int a[], int n)
{
	int i;

	for (i=0; i<n; )
	{
		scanf("%d", &a[i]);
		/*********Found************/
		i++;
	}
}
