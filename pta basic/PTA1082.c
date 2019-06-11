#include<stdio.h>

struct {
	int x, y;
	int id;
} arr[10005];

int main()
{
	int n, i, max, min, num, maxid, minid;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d", &arr[i].id, &arr[i].x, &arr[i].y);
	}
	max = arr[0].x * arr[0].x + arr[0].y * arr[0].y;
	min = arr[0].x * arr[0].x + arr[0].y * arr[0].y;
	maxid = arr[0].id;
	minid = arr[0].id;
	for(i = 0; i < n; i++)
	{
		num = arr[i].x * arr[i].x + arr[i].y * arr[i].y;
		if(max < num)
		{
			maxid = arr[i].id;
			max = num;
		}
		if(min > num)
		{
			minid = arr[i].id;
			min = num;
		}
	}
	printf("%04d %04d\n", minid, maxid);
	return 0;
}
