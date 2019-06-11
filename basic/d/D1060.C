#include <stdio.h>

int main(void)
{
	struct student
	{
		int num;
		char name[10];
	} stu[3], *ptr;
	int i;

	for (i=0; i<3; i++)
	{
		scanf("%d,%s\n", &stu[i].num, stu[i].name);
	}
	/*********Found************/
	for (ptr=stu; ptr < stu + 3; ptr++)
	{
		printf("%d, %s\n", ptr->num, ptr->name);
	}

	return 0;
}
