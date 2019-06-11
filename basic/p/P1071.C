#include<stdio.h>
#include<malloc.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬���������ʹ�õĽṹ�����͡������Զ��庯����ԭ�ͣ���������) */
struct link {
	int data;
	struct link *next;
};

struct link* creatlink(int n);
struct link* delodd(struct link* head);




/* User Code End(�������Ӵ������) */

/* print�Թ涨�ĸ�ʽ��ɱ�����ʾָ�������� */
void printlink(struct link *Head);

int main(void)
{
	struct link *Head;
	int n;
	
	printf("input the number: ");
	scanf("%d", &n);

	Head = creatlink(n);
	printf("\nold list: ");
	printlink(Head);

	Head = delodd(Head);
	printf("\nnew list: ");
	printlink(Head);	   
	
	return 0;
}

void printlink(struct link *Head)
{
	while (Head != NULL)
	{
		printf("%d -> ", Head->data);
		Head = Head->next;
	}
	puts("NULL");
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
struct link* creatlink(int n)
{
	int i, temp;
	struct link *p, *head = NULL, *last = NULL;
	
	printf("Please input the data : "); 
	for(i = 0; i < n; i++)
	{
		p = (struct link*)malloc(sizeof(struct link));
		scanf("%d", &temp);
		p->data = temp;
		p->next = NULL;
		if(last)
		{
			last->next = p;
		}
		else
		{
			head = p;
		}
		last = p;
	}
	return head;
}

struct link* delodd(struct link* head)
{
	struct link *Nhead = head, *p = head, *q = NULL, *temp1 = NULL, *temp2 = NULL;
	if(Nhead == NULL)
	{
		return Nhead;
	}
	while(1)
	{
		if(p->data % 2 != 0)
		{
			Nhead = p->next;
			if(Nhead == NULL)
			{
				return Nhead;
			}
			p = p->next;
		}
		else
		{
			break;
		}
	}
	for(p = Nhead; p; p = temp1)
	{
		temp1 = p->next;//����p��һ���ڵ� 
		if(p->data % 2 != 0)
		{
			free(p);//ɾ���ڵ�p�����ͷ���ռ䡣 
			q->next = temp1;//��p�ϸ��ڵ�����p����һ���ڵ� 
		}
		else
		{
			q = p;//����p��һ���ڵ� 
		}
	}
	return Nhead;
}