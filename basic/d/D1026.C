#include<stdio.h>

int binary(int a[ ], int n, int key);

int main(void)
{
	int data[10] = {2, 5, 7, 13, 16, 18, 23, 26, 28, 35};
	int pos=0, key;

	printf("Input an integer to find:");
	scanf("%d", &key);
	/*********Found************/
	pos = binary(data, 10, key) ;
	if (pos == -1)
	{
		printf("Can't find %d.\n", key);
	}
	else
	{
		printf("%d's position is  %d", key, pos);
	}

	return 0;
}

int binary(int a[ ], int n, int key)
{
	int  low, high, mid;

	low = 0;
	high = n - 1;
	/*********Found************/
	while ( low <= high )
	{
		mid = (low + high) / 2;
		if (key < a[mid])
		{
			high = mid - 1;
		}
		else if (key > a[mid])
		{
			low = mid + 1;
		}
		else
		{
			/*********Found************/
			return mid;
		}
	}

	return (-1);
}
