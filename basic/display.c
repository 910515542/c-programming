#include"student.h"

void DisplayStat(void)
{
	int i;
	system("cls");
	printf("\n\n\n");
	printf("科 目 最高分 最低分 平均分 优秀人数 不及格人数 最高分学生学号\n");
	
	for(i = 0; i < SubCount; i++)
	{
		printf("%-6s %6d %6d %6d %8d %10d\t%d\n",
		cSubject[i], iScoreHigh[i], iScoreLow[i],
		iScoreAve[i], iFineCount[i], iFailCount[i], iHighNo[i]);					
	}
}

void DisplaySort(void)
{
	int i;
	system("cls");
	printf("\n\n\n");
	printf("学生学号 计算机成绩 数学成绩 英语成绩 语文成绩 体育成绩\n");
	for(i = 0; i < StuCount; i++)
	{
		printf("%8d %10d %8d %8d %8d %8d\n",
		iStuNo[i], Computer[i], Math[i], English[i], Chinese[i], Physics[i]);
	}
}
