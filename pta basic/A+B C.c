#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	double num1;
	double num2;
	double num3;
	struct _node *next;
} Node;

int main()
{
	Node *head = NULL;
	Node *last = NULL;
	Node *p = NULL;
	Node *q = NULL;
	int n = 0, i = 0, flag= 1;
	double number1, number2, number3;
	
	scanf("%d", &n);
	for(; i < n; i++)
	{
		scanf("%lf %lf %lf", &number1, &number2, &number3);
		p = (Node*)malloc(sizeof(Node));
		p->num1 = number1;
		p->num2 = number2;
		p->num3 = number3;
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
	for(p = head; p; p = p->next, flag++)
	{
		if((p->num1) + (p->num2) > (p->num3))
		{
			printf("Case #%d: true\n", flag);
		}
		else
		{
			printf("Case #%d: false\n", flag);
		}
	}
	for(p = head; p; p = q)
	{
		q= p->next;
		free(p);
	}
	return 0;
}

/*int main()
{
	int n = 0, i = 0, flag = 1;
	double *p = NULL;
	scanf("%d", &n);
	p = (double*)malloc(sizeof(int) * n * 3);
	for(i = 0; i < n * 3; i++)
	{
		scanf("%lf", p[i]);
	}
	for(i = 0; i < n * 3 - 2; i += 3, flag++)
	{
		if(p[i] + p[i + 1] > p[i + 2])
		{
			printf("Case #%d: true\n", flag);
		}
		else
		{
			printf("Case #%d: false\n", flag);
		}
	}
	free(p);
	return 0;
}*/
