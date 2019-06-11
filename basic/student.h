#ifndef __STUDENT__
#define __STUDENT__

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define StuCount 5
#define SubCount 5


extern char *cSubject[];//课程名称 
extern int iStuNo[];//学生学号 
extern int Computer[];//计算机成绩 
extern int Math[];//数学成绩 
extern int English[];//英语成绩 
extern int Chinese[];//语文成绩 
extern int Physics[];//体育成绩 
extern int iScoreHigh[];//以计算机、数学、英语、语文、物理的顺序存放各科最高分 
extern int iScoreLow[];//以计算机、数学、英语、语文、物理的顺序存放各科最低分 
extern int iScoreAve[];//以计算机、数学、英语、语文、物理的顺序存放各科平均分
extern int iHighNo[];
		//以计算机、数学、英语、语文、物理的顺序存放各科最高分学号 
extern int iFineCount[];
		//以计算机、数学、英语、语文、物理的顺序存放各科达优秀人数 
extern int iFailCount[]; 
		//以计算机、数学、英语、语文、物理的顺序存放各科不及格人数 


int MenuSelect();//显示并返回选择的菜单序号 
int MenuHandle();//菜单处理 
int InputData();//输入原始数据 
void StaticScore();//统计最高分、最低分、平均分、最高分学号 
int GetHigh(int  *Score,int *Highest);//统计最高分及最高分学号 
int GetLow(int *Score);//统计最低分 
int GetAve(int *Score);//统计平均分 
void StaticPerson();//统计优秀和不及格人数 
void GetFine_Fail(int *Score, int *fine, int *fail);//统计优秀和不及格人数  
void SortByAve();//以平均分排序 
void DisplayStat();//显示五门课程成绩表 
void DisplaySort();//显示学生成绩排序结果 
void Exchange(int *str1, int *str2);//排序后交换信息 

#endif 
