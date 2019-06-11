#include"student.h"

int iScoreHigh[SubCount];//以计算机、数学、英语、语文、物理的顺序存放各科最高分 
int iScoreLow[SubCount];//以计算机、数学、英语、语文、物理的顺序存放各科最低分 
int iScoreAve[SubCount];//以计算机、数学、英语、语文、物理的顺序存放各科平均分
int iHighNo[SubCount];
		//以计算机、数学、英语、语文、物理的顺序存放各科最高分学号 
int iFineCount[SubCount];
		//以计算机、数学、英语、语文、物理的顺序存放各科达优秀人数 
int iFailCount[SubCount]; 
		//以计算机、数学、英语、语文、物理的顺序存放各科不及格人数 

void StaticScore(void)
{ 
	int SubjectNo[] = {0, 1, 2, 3, 4};//代表五门课程 
	//统计计算机科目相关信息 
	iHighNo[SubjectNo[0]] = GetHigh(Computer,&iScoreHigh[SubjectNo[0]]);
	iScoreLow[SubjectNo[0]] = GetLow(Computer);
	iScoreAve[SubjectNo[0]] = GetAve(Computer); 
	//统计数学科目相关信息  
	iHighNo[SubjectNo[1]] = GetHigh(Math,&iScoreHigh[SubjectNo[1]]);
	iScoreLow[SubjectNo[1]] = GetLow(Math);
	iScoreAve[SubjectNo[1]] = GetAve(Math);
	//统计英语科目相关信息 
	iHighNo[SubjectNo[2]] = GetHigh(English,&iScoreHigh[SubjectNo[2]]);
	iScoreLow[SubjectNo[2]] = GetLow(English);
	iScoreAve[SubjectNo[2]] = GetAve(English);
	//统计语文科目相关信息
	iHighNo[SubjectNo[3]] = GetHigh(Chinese,&iScoreHigh[SubjectNo[3]]);
	iScoreLow[SubjectNo[3]] = GetLow(Chinese);
	iScoreAve[SubjectNo[3]] = GetAve(Chinese); 
	//统计体育科目相关信息
	iHighNo[SubjectNo[4]] = GetHigh(Physics,&iScoreHigh[SubjectNo[4]]);
	iScoreLow[SubjectNo[4]] = GetLow(Physics);
	iScoreAve[SubjectNo[4]] = GetAve(Physics); 
}

void StaticPerson(void)
{
	int SubjectNo[] = {0, 1, 2, 3, 4};//代表五门课程 
	int fine, fail;
	//统计计算机优秀与不及格人数 
	GetFine_Fail(Computer,&fine,&fail);
	iFineCount[SubjectNo[0]] = fine;
	iFailCount[SubjectNo[0]] = fail;
	//统计数学优秀与不及格人数 
	GetFine_Fail(Math, &fine, &fail);
	iFineCount[SubjectNo[1]] = fine;
	iFailCount[SubjectNo[1]] = fail;
	//统计英语优秀与不及格人数 
	GetFine_Fail(English, &fine, &fail);
	iFineCount[SubjectNo[2]] = fine;
	iFailCount[SubjectNo[2]] = fail;
	//统计语文优秀与不及格人数 
	GetFine_Fail(Chinese, &fine, &fail);
	iFineCount[SubjectNo[3]] = fine;
	iFailCount[SubjectNo[3]] = fail;
	//统计体育优秀与不及格人数 
	GetFine_Fail(Physics, &fine, &fail);
	iFineCount[SubjectNo[4]] = fine;
	iFailCount[SubjectNo[4]] = fail;
}

void GetFine_Fail(int *Score, int *fine, int *fail)
{
	int i;
	*fine = *fail = 0;
	for(i = 0; i < StuCount; i++)
	{
		if(Score[i] >= 90)
		{
			*fine+=1;
		}
		else
		{
			if(Score[i] < 60)
			{
				*fail+=1;
			}
		}
	}
}

int GetHigh(int *Score, int *Highest)
{
	int i = 0,HighNo = 0;
	int max = Score[0];
	for(i = 0; i < StuCount; i++)
	{
		if(max < Score[i])
		{
			max = Score[i];
			HighNo = i;
		}
	}
	*Highest = max;
	return iStuNo[HighNo];
}

int GetLow(int *Score)
{
	int i, min = Score[0];
	for(i = 0; i < StuCount; i++)
	{
		if(min > Score[i])
		{
			min = Score[i];
		}
	}
	return min;
}

int GetAve(int *Score)
{
	int i, sum = 0;
	int Ave = 0;
	for(i = 0; i < StuCount; i++)
	{
		sum += Score[i];
	}
	Ave = sum/StuCount;
	return Ave;
}

