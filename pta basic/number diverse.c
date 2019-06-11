#include<stdio.h>
#include<stdlib.h>

struct {
	int num1[5];
	int num2[5];
} str; 

int main()
{
	int *arr, A2arr[1000] = {0}, A4arr[1000] = {0};
	int n = 0, sum = 0, flag = 0, flag2 = 1;
	int i = 0, j = 0, k = 0, num = 0;
	int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
	double A4 = 0;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		flag = arr[i] % 5;
		switch(flag)
		{
			case 0:if(arr[i] % 2 == 0)
			{
				A1 += arr[i];
				count1++;
			}
			break;
			case 1:A2arr[j] = arr[i], j++, count2++; break;
			case 2:A3++, count3++; break;
			case 3:sum += arr[i], num++, count4++; break;
			case 4:A4arr[k] = arr[i], k++, count5++; break;
		}
	}
	for(i = 0; i < j; i++)
	{
		A2 += flag2 * A2arr[i];
		flag2 *= -1;
	}
	A5 = A4arr[0];
	A4 = 1.0 * sum / num;
	for(i = 0; i < k; i++)
	{
		if(A5 < A4arr[i])
		{
			A5 = A4arr[i];
		}
	}
	
	A4 = sum * 1.0 / num;
	str.num1[0] = count1;
	str.num1[1] = count2;
	str.num1[2] = count3;
	str.num1[3] = count4;
	str.num1[4] = count5;
	str.num2[0] = A1;
	str.num2[1] = A2;
	str.num2[2] = A3;
	str.num2[4] = A5;
	for(i = 0; i < 5; i++)
	{
		if(str.num1[i] != 0)
		{
			if(i == 3)
			{
				printf("%.1f ", A4);
			}
			else
			{
				if(i == 4)
				{
					printf("%d", str.num2[i]);
				}
				else
				printf("%d ", str.num2[i]);
			}
		}
		else
		{
			if(i == 4)
			{
				printf("N");
			}
			else
			printf("N ");
		}
	}
	return 0;
}
