#include<stdio.h>

int main()
{
	int i, j, k, temp, arr[10] = {10, 2, 3, 7, 8, 5, 2, 0, 3, 14,};
	for(i = 1; i < 10; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				//ÏòÓÒÒÆ¶¯ 
				for(k = i; k > j; k--)
				{
					arr[k] = arr[k - 1];
				}
				arr[j] = temp;
				break;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
 } 
