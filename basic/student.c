#include"student.h"

int iStuNo[StuCount];//学号 
int iComputer[StuCount];//计算机成绩 
int iMath[StuCount];//数学 
int iEnglish[StuCount];//英语 
int iChinese[StuCount];//语文 
int iPhysics[StuCount];//物理成绩 


int iScoreHigh[SubCount];//以计算机、数学、英语、语文、物理的顺序存放各科最高分 
int iScorelow[SubCount];//以计算机、数学、英语、语文、物理的顺序存放各科最低分 
int iScoreAve[SubCount];//以计算机、数学、英语、语文、物理的顺序存放各科平均分
int iHighNo[SubCount];
		//以计算机、数学、英语、语文、物理的顺序存放各科最高分学号 
int iFineCount[SubCount];
		//以计算机、数学、英语、语文、物理的顺序存放各科达优秀人数 
int iFailCount[SubCount]; 
		//以计算机、数学、英语、语文、物理的顺序存放各科不及格人数 

void main(void)
{
	freopen("c:\\test\\test1.txt", "r", stdin);
	int option;
	int quit;
	
	
	printf("\n\n\n\n\n");
	printf("\t\t************************************************\n");
	printf("\t\t*                                              *\n");
	printf("\t\t*                                              *\n");
	printf("\t\t*                                              *\n");
	printf("\t\t*    学生成绩管理程序                          *\n");
	printf("\t\t*                                              *\n");
	printf("\t\t*                                              *\n");
	printf("\t\t*                                              *\n");
	printf("\t\t*             按任意键进入......               *\n");
	printf("\t\t*                                              *\n");
	printf("\t\t*                                              *\n");
	printf("\t\t************************************************\n");
	getche();
	while(1)
	{
		option = MenuSelect();//得到用户选择的菜单序号 
		quit = MenuHandle(option);//进行菜单执行，直到用户退出程序（case 6：quit = 1） 
		if(quit == 1)break;
	}
}

int MenuSelect(void)
{
	int option;
	int input;

	
	system("cls");
	printf("\n\n****************************************\n");
	printf("\t1.	输入原始数据\n");
	printf("\t2.	统计最高分、最低分、平均分和最高分学生学号\n");
	printf("\t3.	统计优秀和不及格人数\n");
	printf("\t4.	按平均分排序，并显示排序结果\n");
	printf("\t5.	显示学生成绩统计表\n");
	printf("\t6.	退出程序\n");
	printf("\n\t数字对应功能选择，请选择1-6：	");
	
	
	while(1)
	{
		input = scanf("%d",&option);
		if(input != 1)
		{
			printf("\n\t 输入错误，重选1-6：");
			fflush(stdin); 
		}
		else
		{
			if((option<1) || (option>6))
			{
				printf("\n\t 选择错误，重选1-6：");
			}
			else break; 
		}
	} 
	return option;
} 

int MenuHandle(int option)
{
	int quit = 0;
	switch(option)
	{
		case 1:if(InputData() == 0)//输入学号与各科成绩 
		{
			printf("\n\n输入数据错误，程序退出");
			fflush(stdin);
			quit = 1; 
		}
		else
		{
			printf("\nOK!\t完成数据输入，按任意键继续......");
			getche();
			break; 
		}
		
		case 2:StaticScore();     //各科分数统计 
			   printf("\nOK!\t完成分数统计，按任意键继续......");
			   getche();
			   break;
			   
		case 3:StaticPerson();   //统计优秀与不及格人数 
			   printf("\nOK!\t完成人数统计，按任意键继续......");
			   getche();
			   break;
			   
		case 4:SortByAve();     //按平均分排序，并显示排序结果 
			   DisplaySort();
			   printf("\nOK!\t完成排序，按任意键继续......");
			   getche();
			   break;
			   
		case 5:DisplayStat();   //显示成绩统计表 
			   printf("\n按任意键继续......");
			   getche();
			   break;
			   
		case 6:quit = 1;       ///结束程序 
		       break; 
	}
	return quit;
}
