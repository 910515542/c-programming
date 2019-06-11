#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
} Node;
typedef struct _list{
	Node *head;
	Node *tail;
} List;

void input(List *list, int num);
void clear(List *list);
void output(List list);
void swap(Node **p);


int main()
{
	int num;
	List list;
	list.head = NULL;
	list.tail = NULL;
		
	do
	{
		scanf("%d", &num);
		if(num != -1)
		{
			input(&list, num);
		}
	}while(num != -1);
	
	//swap(&(list.head->next));
	output(list);
	clear(&list);
	return 0;
}

void input(List *list, int num)
{
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = num;
	p->next = NULL;	
	if ( list->tail )
	{
		while ( list->tail->next )
		{
			list->tail = list->tail->next;
		}
		list->tail->next = p;
	}
	else
	{
		list->tail = list->head = p;
	}
}

void output(List list)
{
	Node *p = NULL;
	for(p = list.head; p; p = p->next)
	{
		printf("%d\t", p->value);
	}
	printf("\n");
}

void clear(List *list)
{
	Node *p = NULL;
	Node *q = NULL;
	for(p = list->head; p; p = q)
	{
		q = p->next;
		free(p);
	}
}

void swap(Node **p)
{
	Node *p1;
	Node *p2;
	if((*p)->next)
	{
		p1 = *p;
		p2 = (*p)->next->next;
		(*p) = (*p)->next;
		(*p)->next = p1;
		(*p)->next->next = p2; 
	}
	else
	{
		printf("Can't finish swap!the 'node->next' is NULL\n");
	}
}
