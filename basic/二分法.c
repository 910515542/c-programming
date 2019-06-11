#include<stdio.h>

int main()
{
	int arr[10] = {1, 3, 34, 45, 56, 57, 78, 90, 91, 92};
	int left = 0, right = 9;
	int mid, flag = -1;
	int key = 78;
	while(right >= left)
	{
		mid = (left + right) / 2;
		printf("%d, %d, %d,  %d\n", left, mid, right, arr[mid]);
		if(arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			if(arr[mid] == key)
			{
				flag = mid;
				break;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	printf("%d\n", flag);
	return 0;
}
