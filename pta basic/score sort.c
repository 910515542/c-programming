#include<stdio.h>
#include<stdlib.h>

struct student {
	char name[11];
	char num[11];
} *arr;

int main()
{
	int *score;
	int n, i;
	int max = 0, min = 0;
	
	
	scanf("%d", &n);
	arr = (struct student*)malloc( n * 22);
	score = (int*)malloc(sizeof(int) * n);
	for(i = 0; i < n; i++)
	{
		scanf("%s %s %d", &(arr[i].name), &(arr[i].num), &score[i]);
		fflush(stdin);
	}
	
	for(i = 0; i < n; i++)
	{
		if(score[max] < score[i])
		{
			max = i;
		}
		if(score[min] > score[i])
		{
			min = i;
		}
	}
	printf("%s %s\n%s %s\n", arr[max].name, arr[max].num, arr[min].name, arr[min].num);
	return 0;
 } 
