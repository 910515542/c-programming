#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
} Node;

int main()
{
	Node *head = NULL;
	Node *last = NULL;
	Node *p2 = NULL;
	Node *p = NULL;
	Node **Nodearr = NULL;
	int num, count = 0, flag = 0;
	int i;
	
	while(num != -1)
	{
		scanf("%d", &num);
		if(num != -1)
		{
			count++;
			Node *p = (Node*)malloc(sizeof(Node));
			p->value = num;
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
				head = last = p;
			}
		}
	}
	
	/*for(p = head; p; p = p->next)
	{
		printf("%d ", p->value);
	}
	printf("\n");
	printf("%d\n", count);*/
	Nodearr = (Node**)malloc(sizeof(Node) * count);
	for(p = head, i = 0; p; p = p->next, i++)
	{
		Nodearr[i] = p;
	}
/*	for(i = count - 1; i > -1; i--)
	{
		printf("%d ", q[i]);
	}*/
	
	for(i = count - 1; i >= 0; i--)
	{
		printf("%d ", Nodearr[i]->value);
	}
	for(p = head; p; p = p2)
	{
		p2 = p->next;
		free(p);
	}
	free(Nodearr);
	return 0;
}
