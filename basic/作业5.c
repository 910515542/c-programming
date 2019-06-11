#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include"experiment5.h"
#include"作业5_.h"

int main()
{	
	int number;
	date today = {1,2,'A'};
	bite_int number2={7,3,7};
	Binary(*(int*)&number2);//将自定义int位段的结构当作一个int变量使用 
	printf("%d %d %c\n",today.a,today.b,today.c);
	number = menu();
	switch(number)
	{
		case 1:Feb_days();break;
		case 2:func();break;
		case 3:caculator();break;
		case 4:Tax();break;
		case 5:MathLearn();break;
		case 0:break;
		default:printf("输入错误！请重新输入。");
	}
	return 0;
}
