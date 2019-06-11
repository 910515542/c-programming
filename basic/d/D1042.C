#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char No[11];
	char Name[11];
	int Age;
};
struct Node
{
	struct Student Stu;
	struct Node *Next;
};

void CreateList(struct Node *Head);
void Output(struct Node *Head);

int main(void)
{
	/*********Found************/
	struct Node *Head; 

	Head = (struct Node *)malloc(sizeof(struct Node));
	Head->Next = NULL; 
	CreateList(Head);
	Output(Head);
	
	return 0;
}

void CreateList(struct Node *Head)
{
	int i = 0;
	char tmp[10];

	do
	{
		struct Node *tt;

		tt = (struct Node*)malloc(sizeof(struct Node));
		printf("请输入学生的学号:");
		gets(tt->Stu.No);
		printf("请输入学生的姓名:");
		gets(tt->Stu.Name);
		printf("请输入学生的年龄:");
		gets(tmp);
		tt->Stu.Age = atoi(tmp);
		tt->Next = Head->Next;
		/*********Found************/
		Head->Next = tt;
		printf("是否继续添加节点?(Y/N)");
		gets(tmp);
	} while (tmp[0]=='Y' || tmp[0]=='y');
}

void Output(struct Node *Head)
{
	struct Node *p;

	p = Head->Next;
	printf("全部学生信息如下:\n");
	while (p)
	{
		printf("%15s%15s%10d\n", p->Stu.No, p->Stu.Name, p->Stu.Age);
		p = p->Next;
	}
}
