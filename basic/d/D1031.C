#include<stdio.h>

/*********Found************/
#define  N 3

struct  communication
{
	char name[20];
	long int No;
} commun[N];

void set_record(struct communication *p);
void print_record(struct communication *p);

int main(void)
{
	int i;

	for(i=0; i<N; i++)
	{
		set_record(commun + i);
		print_record(commun + i);
	}

	return 0;
}

void set_record(struct communication *p)
{
	printf("Set a record\n");
	/*********Found************/
	scanf("%s %ld", p->name, &(p->No));
}

void print_record (struct communication *p)
{
	printf("Print a record\n");
	printf("Name: %s\n", p->name);
	printf("No: %ld\n\n", p->No);
}
