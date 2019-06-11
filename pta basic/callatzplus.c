#include<stdio.h>

int main()
{
	int i, flag, k, j, temp, len = 0;
	int arr1[100];
	char arr2[100] = {0};
	int arr3[100] = {0};
	
	scanf("%d", &k);
	for(i = 0; i < k; i++)
	{
		arr2[i] = 1;
	}
	for(i = 0; i < k; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	for(i = 0; i < k; i++)
	{
		flag = arr1[i];
		while(flag != 1)
		{
			if(flag % 2 == 0)
			{
				flag /= 2;
				for(j = 0; j < k; j++)
				{
					if(flag == arr1[j])
					{
						arr2[j] = 0;
					}
				}
			}
			else
			{
				flag = (3 * flag + 1) / 2;
				for(j = 0; j < k; j++)
				{
					if(flag == arr1[j])
					{
						arr2[j] = 0;
					}
				}
			}
		}
	}
	
	for(i = 0, j = 0; i < k; i++)
	{
		if(arr2[i])
		{
			arr3[j] = arr1[i];
			j++;
			len++;
		}
	}
	for(i = 1; i < len; i++)
	{
		for(j = 0; j < len - i; j++)
		{
			if(arr3[j] < arr3[j + 1])
			{
				temp = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = temp;
			}
		}
	}

	for(i = 0; i < len; i++)
	{
		if(i == len -1)
		{
			printf("%d", arr3[i]);
		}
		else
		printf("%d ", arr3[i]);
	}
	printf("\n");
	return 0;
}

	

