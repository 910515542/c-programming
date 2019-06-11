#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STU
{
	char number[20];
	char name[20];
	int sex; //0表示女 1表示男
	int age;
	struct STU *next_stu;
};

struct STU *creat_stu();
struct STU *delete_stu(struct STU *head, struct STU *before, struct STU *temp);

int main(void)
{
	char str[20];
	struct STU *head, *temp, *before;

	head = creat_stu();
	printf("需要查找的学号为:");
	scanf("%s", str);
	before = temp = head;
	while (temp != NULL)
	{
		if (strcmp(temp->number, str) == 0)
		{
			printf("找到该学生，学号:%s、姓名:%s、性别：%s、年龄:%d\n",
								temp->number, temp->name, temp->sex==0?"女":"男", temp->age);
			head = delete_stu(head, before, temp);
			printf("删除该学生完成\n");
			break;
		}
		before = temp;
		/*********Found************/
		temp = temp->next_stu;
	}

	if(NULL == temp)
	{
		printf("没有找到该学生\n");
	}

	return 0;
}

struct STU *creat_stu()
{
	struct STU *p, *before, *head;
	int temp;

	p = before = head = NULL;
	printf("请输入一个学生，以回车分开\n");
	while(1)
	{
		p = (struct STU *)malloc(sizeof(struct STU));
		printf("学号：");
		scanf("%s", p->number);
		printf("姓名：");
		scanf("%s", p->name);
		printf("性别（女填0，男填1)：");
		scanf("%d", &p->sex);
		printf("年龄：");
		scanf("%d", &p->age);

		if (before != NULL)
		{
			before->next_stu = p;
		}
		else
		{
			head = p;
		}

		printf("是否继续输入？(是的话输入1，不是的话输入0):");
		scanf("%d", &temp);
		if (0 == temp)
		{
			/*********Found************/
			p->next_stu = NULL;
			break;
		}
		before = p;
	}

	return head;
}

struct STU *delete_stu(struct STU *head, struct STU *before, struct STU *temp)
{
	if (temp == head)
	{
		/*********Found************/
		head = temp->next_stu;
	}
	else
	{
		/*********Found************/
		before->next_stu = temp->next_stu;
	}

	return head;
}
