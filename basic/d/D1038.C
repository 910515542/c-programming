#include<stdio.h>

int main(void)
{
	typedef struct {
		int    num;
   		char   name[20];
   		char   sex[10];
   		int    age;   		
	} STU;

	/*********Found************/
	STU stu1 = {1, "marry", "boy", 18};

	printf("number is %d, name is %s, sex is %s, age is %d",stu1.num,stu1.name,stu1.sex,stu1.age);

	return 0;
}
