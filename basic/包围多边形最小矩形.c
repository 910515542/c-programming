#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int x;
	int y;
	struct _node *next;
} Node;

int main()
{
	Node *head = NULL;
	Node *last = NULL;
	Node *p1 = NULL;
	Node *q = NULL;
	int num1, num2;
	int Xmax, Xmin, Ymax, Ymin;
	int n;
	int i;
	Node *p = NULL;
	
	scanf("%d", &n);//输入多边形图形坐标组数
	/*****输入每组坐标（x,y） **************/
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &num1, &num2);
		Node *p = (Node*)malloc(sizeof(Node));
		p->x = num1;
		p->y = num2;
		p->next = NULL;
		if(last)
		{
			while(last->next)
			{
				last = last->next;
			}
			last->next = p;
		}
		else
		{
			last = head = p;
		}
	}
	/****************************************/
	Xmax = head->x;
	Xmin = head->x;
	Ymax = head->y;
	Ymin = head->y;

	for(p = head; p; p = p->next)
	{
		if(Xmax < p->x)
		{
			Xmax = p->x;
		}
		if(Xmin > p->x)
		{
			Xmin = p->x;
		}
		if(Ymax < p->y)
		{
			Ymax = p->y;
		}
		if(Ymin > p->y)
		{
			Ymin = p->y;
		}
	}
//free maloc的内存 
	for(p1 = head; p1; p1 =q)
	{
		q = p1->next;
		free(p1);
	}
	
	printf("%d %d %d %d\n", Xmin, Ymin, Xmax, Ymax);
	return 0;
}
