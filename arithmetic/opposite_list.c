#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int num;
	struct _node *next;
} Node;

Node* reverselist(Node *head)
{
	if(head == NULL || head->next == NULL)
	return head;
	Node *newh = NULL, *p = head, *temp;
	while(p!= NULL)
	{
		temp = p->next;
		//先将将该位置节点接到上次循环的newh前面 
		p->next = newh;
		//再让该节点成为新的链头 
		newh = p;
		p = temp;
	}
	return newh;
}
 
Node* reverselist2(Node *h)
{
	Node *newh = NULL, *p = NULL;
	if(h == NULL || h->next == NULL)
	{
		return h;
	}
	//递归达到链表最后一个节点，再逐步return 结束函数，相当于从链表尾部遍历链表 
	newh = reverselist2(h->next);
	h->next->next = h;//该函数执行完之后旧链表头的next没被覆盖，仍指向第二个节点，即它的next不等于NULL
	//因此调用完该函数后需将旧链表头的next = NULL。或者如下所示在该语句后加上h->next = NULL这条语句。
	//h->next = NULL; 
	return newh;
}

int main()
{
	Node *head = NULL, *last = NULL, *p = NULL, *q = NULL;
	int temp;
	
	scanf("%d", &temp);
	while(temp != -1)
	{
		p = malloc(sizeof(Node));
		p->num = temp;
		p->next = NULL;
		if(last)
		{
			last->next = p;
			last = last->next;
		}
		else
		{
			last = p;
			head = p;
		}
		scanf("%d", &temp);
	}
	p = reverselist2(head);
//	head->next = NULL;//如果没加这条语句，将无法进行下面的遍历 
	for( ; p; p = p->next)
	{
		printf("%d ", p->num);
	}
	printf("\n");
	for(p = head; p; p = q)
	{
		q = p->next;
		free(p);
	}
	return 0;
}
