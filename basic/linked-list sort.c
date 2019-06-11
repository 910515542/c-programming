#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
} Node;

typedef struct {
	Node *head;
	Node *tail; 
} List;

void sort(Node *p);

int main()
{
	Node *p = NULL;
	Node *q = NULL;
	List list;
	int num;
	
	list.head = NULL;
	list.tail = NULL;
	do
	{
		scanf("%d", &num);
		if(num != -1)
		{
			p = (Node*)malloc(sizeof(Node));
			p->value = num;
			p->next = NULL;
			if(list.tail)
			{
				while(list.tail->next)
				{
					list.tail = list.tail->next;
				}
				list.tail->next = p;
			}
			else
			{
				list.tail = list.head = p;
			}
		}
	}while(num != -1);
	
	for(p = list.head; p; p = p->next)
	{
		printf("%d\t", p->value);
	}
	printf("\n\n");
	
	for(p = list.head; p; p = q)
	{
		q = p->next;
		free(p);
	}
	
	sort(list.head);
	printf("\n");
	return 0;
}

void sort(Node *p)
{
	if(p->next != NULL)
	{
		sort(p->next);
		printf("%d ", p->value);
	}
}

