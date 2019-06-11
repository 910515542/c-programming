#include<stdio.h>
#include <string.h>

int main(void)
{
	int i, j, k;
	char a[] = "language", t;

	k = strlen(a);
	for (i=0; i<k; i++)
	{
		for (j=i+1; j<k; j++)
		{
			/*****Found*****/
			if (a[i] < a[j])
			{
				t = a[j];
				/*****Found*****/
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	printf("%s\n", a);

	return 0;
}
