#include<stdio.h>

int main(void)
{
	int low, high, mid, key;
	int array[15] = {1, 3, 6, 8, 12, 14, 23, 45, 67, 68, 78, 79, 100, 112, 223};

	printf("\ninput an integer data: ");
	scanf("%d", &key);

	low = 0,  high = 14;
	while (low <= high)
	{
		/*********Found************/
		mid =(low + high)/2 ;
		if (array[mid] == key)
		{
			break;
		}
		else if (array[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			/*********Found************/
			low = mid +1;
		}
	}
	
	/*********Found************/
	if (low <= high) 
	{
		printf("%d is found!\n", key);
	}
	else
	{
		printf("%d is not found!\n", key);
	}

	return 0;
}
