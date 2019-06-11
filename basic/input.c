#include"student.h"

int iStuNo[StuCount];//学生学号 
int Computer[StuCount];//计算机成绩
int Math[SubCount];//数学成绩 
int English[StuCount];//英语成绩 
int Chinese[StuCount];//语文成绩 
int Physics[StuCount];//物理成绩 

int InputData(void)
{
	int i;
	int n = 0;//作为返回变量 
	int flag = 0;  //判别输入操作的标志
	
	
	system("cls");
	printf("\n\n请以下面所示的顺序和格式输入原始数据： \n");
	printf("  学生学号 计算机成绩 数学成绩 英语成绩 语文成绩 体育成绩\n");
	for(i = 0; i < StuCount; i++)
	{
		printf("%2d:", i + 1);
		flag = scanf("%d %d %d %d %d %d", &iStuNo[i], &Computer[i], &Math[i], &English[i], &Chinese[i], &Physics[i]);
		if(flag != 6)
		{
			fflush(stdin);
			break;
		}
		else
		{
			n = 1;
		}
		//输入成绩 
	}
	return n;		
} 
