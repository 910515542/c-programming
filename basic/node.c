#include"node.h"

/*typedef struct _node {
	int value;
	struct _node *next;
} Node;

typedef struct _list {
	Node *head;
	Node *tail;
} List;*/

int main()
{
	int number, num;
	List list;
	list.head = NULL;
	printf("please input removed number:");
	scanf("%d", &num);
	do
	{
		scanf("%d", &number);
		if( number != -1)
		{
			node(&list, number);
		}
		_remove_(&list, num);
	}
	while(number != -1);
	
	print(list);
	
	_free_(list);
	return 0;
}

void node(List *pList, int number)
{
	//add to new linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//find the last linked-list
	Node *last = pList->head;
	if(last)
	{
		/*by loop linked-list find last,*/ 
		while(last->next)
		{
			last = last->next;
		}
		/********************************/
		last->next = p;//attach linked-list
	}
	else
		{
			pList->head = p;
			pList->tail = p;
		}
}

void print(List list)
{
	Node *p;
	/*±éÀúlinked-list*/
	for(p = list.head; p; p = p->next)
	{
		printf("%d\t", p->value);
	}
	printf("\n");
}

void _remove_(List *plist, int num)
{
	Node *q = NULL, *p = NULL;
	for(p = plist->head; p; q = p,p = p->next)
	{
		if(p->value == num)
		{
			if(q)
			{
				q->next = p->next;
			}
			else
			{
				plist->head = p->next;
			}
			free(p);
			break;
		}
		
			//printf("%d\t", p->value);
		
	}
}

void _free_(List list)
{
	Node *p, *q;
	for(p = list.head; p; p = q)
	{
		q = p->next;
		free(p);
	}
}
