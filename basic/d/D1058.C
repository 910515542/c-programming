#include <stdio.h>

int main(void)
{
	struct student
	{
		int num;
		char name[10];
		float score[3];
	} stu1 = {2012,  "WuHua",  {75.4f, 80, 92}};
	struct student *ptr;

	/*********Found************/
	ptr = &stu1;
	/*********Found************/
	printf("%s\n", ptr -> name);

	return 0;
}
