#include<stdio.h>
#include<malloc.h>

/* User Code Begin(考生可在本行后添加代码，定义程序中使用的结构体类型、声明自定义函数的原型，行数不限) */
struct link {
	int data;
	struct link *next;
};

struct link* creatlink(int n);
struct link* delodd(struct link* head);




/* User Code End(考生添加代码结束) */

/* print以规定的格式完成遍历显示指定的链表 */
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

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
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
		temp1 = p->next;//保存p下一个节点 
		if(p->data % 2 != 0)
		{
			free(p);//删除节点p，并释放其空间。 
			q->next = temp1;//让p上个节点链接p的下一个节点 
		}
		else
		{
			q = p;//保存p上一个节点 
		}
	}
	return Nhead;
}
