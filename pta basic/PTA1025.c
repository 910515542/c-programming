/******************
my faults:最后一个测试点没过
		  最后逆序时结点个数应该算真正在链表上的结点数
		  有些输入结点并不在链表上。 
*******************/
#include<stdio.h>

void sort(int *arr, int len);

struct {
	int data, next;
} node[100000];
int nodelist[100000];

int main()
{
	int i, j = 0, head, n, k, temp;
	
	scanf("%d %d %d", &head, &n, &k);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		scanf("%d %d", &node[temp].data, &node[temp].next);
	}
	for(i = head; i != -1; i = node[i].next)
	{
		nodelist[j++] = i;
	}
	//j刚好为链表有效结点个数 
	for(i = 0; i < j; i += k)
	{
		if(i + k - 1 < j)
		{
			sort(&nodelist[i], k);
		}
	}
	for(i = 0; i < n; i++)
	{
		if(i == n - 1)
		printf("%05d %d -1\n", nodelist[i], node[nodelist[i]].data);
		else
		printf("%05d %d %05d\n", nodelist[i], node[nodelist[i]].data, nodelist[i + 1]);
	}
	return 0;
}

void sort(int *arr, int len)
{
	int i = 0, j = 0, k = len - 1, temp;
	
	for(; i < len/2; i++, j++, k--)
	{
		temp = arr[j];
		arr[j] = arr[k];
		arr[k] = temp;
	}
}
