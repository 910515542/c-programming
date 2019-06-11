#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
} Node;

Node *adverse_link(Node *head);
Node *adverse_link2(Node *head);

int main()
{
	Node *head = NULL, *last = NULL;
	Node *p = NULL, *q = NULL;
	
	int temp;
	
	printf("请输入数据，以-1结束：");
	scanf("%d", &temp);
	while(temp != -1)
	{
		p = malloc(sizeof(Node*));
		p->value = temp;
		p->next = NULL;
		if(head)
		{
			last->next = p;
		}
		else
		{
			head = p;
			last = p;
		}
		last = p;
		scanf("%d", &temp);
	}
	head = adverse_link2(head);
	for(p = head; p; p = p->next)
	{
		printf("%d ", p->value);
	}
	printf("\n");
	
	for(p = head; p; p = q)
	{
		q = p->next;
		free(p);
	}
	return 0;
}

Node *adverse_link(Node *head)//头接法反转链表 
{
	Node *Nhead, *temp = NULL, *p = head;
	if(head == NULL || head->next == NULL)
	return head;
	while(p)
	{
		temp = p->next;
		p->next = Nhead;
		Nhead = p;
		p = temp;
	}
	return Nhead;
}

Node *adverse_link2(Node *head)//递归反转链表 
{
	Node *Nhead = NULL;
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
	Nhead = adverse_link2(head->next);
	head->next->next = head;
	head->next = NULL;
	return Nhead;
}
