#include<stdio.h>
#include<stdlib.h> 

typedef struct _node{
	int num1;
	int num2;
	struct _node *next;
} Node;

int main()
{
	Node *head = NULL;
	Node *last = NULL;
	Node *p = NULL;
	Node *q = NULL;
	int numA, numB = 1;
	
	while(numB != 0)
	{
		scanf("%d %d", &numA, &numB);
		if(numB != 0)
		{
			p = (Node*)malloc(sizeof(Node));
			p->num1 = numA;
			p->num2 = numB;
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
	}
	
	if(head != NULL)
	{
		for(p = head; p; p = p->next)
		{
			p->num1 = (p->num1) * (p->num2);
			p->num2 = p->num2 - 1;
			if(p->next)
			{
				printf("%d %d ", p->num1, p->num2);
			}
			else
			{
				printf("%d %d", p->num1, p->num2);
			}
		}
		
		for(p = head; p; p = q)
		{
			q= p->next;
			free(p);
		}
	}
	else
	{
		printf("0 0");
	}
	return 0;
}
