#include<stdio.h>  
#include<malloc.h>  

#define N 13  
#define LEN sizeof(struct person)  

int main(void)
{  
	int i, count;
	struct person
	{
		int number;
		/*********Found************/
		struct person* next;
	} *head, *p1, *p2;

	head = p2 = NULL;
	for (i=1; i<=N; i++)
	{  
		p1 = (struct person *)malloc(LEN);
		p1->number = i;
		if (NULL == head)
		{
			/*********Found************/
			head = p1;
		}
		else
		{
			p2->next = p1; 
		}
		p2 = p1;
	}
	p2->next = head;

	printf("the sequence out of the circle is:\n");
	for (count=1; count<N; count++)
	{
		i = 1;
		while (i != 3)
		{
			p1 = head;
			/*********Found************/
			head = head -> next;
			i++;
		}
		p2 = head;
		printf("%3d ", p2->number);
		p1->next = head = p2->next;
		/*********Found************/
		free(p2);
	}
	printf("\nThe betrayer of them is:%3d\n", head->number);
	
	return 0;
} 
