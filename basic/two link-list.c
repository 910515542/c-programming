#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	struct _node *last;
	int value;
	struct _node *next;
} Node; 

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	Node *p = NULL;
	Node *q = NULL;
	int num = 0;
	
	while(num != -1)
	{
		scanf("%d", &num);
		if(num != -1)
		{
			p = (Node*)malloc(sizeof(Node));
			p->value = num;
			p->last = NULL;
			p->next = NULL;
			if(tail)
			{
				while(tail->next)
				{
					tail = tail->next;
				}
				tail->next = p;
				p->last = tail;
				tail = p;
			}
			else
			{
				head = tail = p;
			}
		}
	}
	for(p = tail; p; p = p->last)
	{
		printf("%d\t", p->value);
	}
	printf("\n");
	
	for(p = head; p; p = q)
	{
		q= p->next;
		free(p);
	}
	return 0;
}
