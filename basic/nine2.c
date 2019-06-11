#include<stdio.h>
#include<stdlib.h>

#define stucount 3

struct _student {
	char name[20];
	int number;
	int chinese;
	int math;
	int english;
	int sumscore;
	double avescore;
} student[stucount];

int cmp(const void *a, const void *b);
void display1(struct _student student[stucount]);
void display2(struct _student student[stucount]);
void display3(struct _student student[stucount]); 

int main()
{
	int i, flag = 0;
	
	printf("请按以下格式输入学生信息：\n");
	printf("姓名   学号  语文  数学  英语\n"); 
	for(i = 0; i < stucount; i++)
	{
		scanf("%s %d %d %d %d", student[i].name, &student[i].number,
		 &student[i].chinese, &student[i].math, &student[i].english);
		 student[i].avescore = (student[i].chinese + student[i].math + student[i].english) * 1.0 / 3;
		 student[i].sumscore = student[i].chinese + student[i].math + student[i].english;
	}
	qsort(student, stucount, sizeof(student[0]), cmp);
	printf("\n***************************************\n");
	printf("0.查看总分最高与最低学生\n");
	printf("1.查看各科第一名与最后一名学生信息\n");
	printf("2.查看平均成绩排名\n");
	printf("-1.退出程序\n");
	printf("\n请输入你的指令：");
	scanf("%d", &flag);
	while(flag != -1)
	{
		switch(flag)
		{
			case 0:display3(student);break;
			case 1:display1(student);break;
			case 2:display2(student);break;
			default :printf("输入错误");break;
		}
		printf("\n请输入你的指令：");
		scanf("%d", &flag);
	}
	return 0;
}

void display1(struct _student student[stucount])
{
	int i, pos[3][2] = { 0 };
	
	for(i = 0; i < stucount; i++)
	{
		if(student[i].chinese > student[pos[0][0]].chinese)
		{
			pos[0][0] = i;
		}
		if(student[i].chinese < student[pos[0][1]].chinese)
		{
			pos[0][1] = i;
		}
		if(student[i].math > student[pos[1][0]].math)
		{
			pos[1][0] = i;
		}
		if(student[i].math < student[pos[1][1]].math)
		{
			pos[1][1] = i;
		}
		if(student[i].english > student[pos[2][0]].english)
		{
			pos[2][0] = i;
		}
		if(student[i].english < student[pos[2][1]].english)
		{
			pos[2][1] = i;
		}
	}
	printf("科目    第一名    最后一名\n");
	printf("语文    %s(%d分)    %s(%d分)\n", student[pos[0][0]].name, student[pos[0][0]].chinese,
										student[pos[0][1]].name, student[pos[0][1]].chinese);
	printf("数学    %s(%d分)    %s(%d分)\n", student[pos[1][0]].name, student[pos[1][0]].math,
										student[pos[1][1]].name, student[pos[1][1]].math);
	printf("英语    %s(%d分)    %s(%d分)\n", student[pos[2][0]].name, student[pos[2][0]].english,
										student[pos[2][1]].name, student[pos[2][1]].english);
}

int cmp(const void *a, const void *b)
{
	struct _student *aa = (struct _student*)a;
	struct _student *bb = (struct _student*)b;
	return aa->avescore > bb->avescore?0:1;
}

void display2(struct _student student[stucount])
{
	int i;
	
	printf("姓名        学号  语文  数学  英语\n");
	for(i = 0; i < stucount; i++)
	{
		printf("%s(%.2f分)  %4d  %4d  %4d  %4d\n", student[i].name, student[i].avescore, student[i].number,
										student[i].chinese, student[i].math, student[i].english);
	}
}

void display3(struct _student student[stucount])
{
	int i, pos1 = 0, pos2 = 0;
	
	for(i = 0; i < stucount; i++)
	{
		if(student[i].sumscore > student[pos1].sumscore)
		{
			pos1 = i;
		}
		else
		{
			pos2 = i;
		}
	}
	printf("              姓名      学号  语文  数学  英语\n");
	printf("最高分  %s(%d分)  %4d  %4d  %4d  %4d\n", student[pos1].name, student[pos1].sumscore, student[pos1].number,
												student[pos1].chinese, student[pos1].math,
												student[pos1].english);
	printf("最低分  %s(%d分)  %4d  %4d  %4d  %4d\n", student[pos2].name, student[pos2].sumscore, student[pos2].number,
												student[pos2].chinese, student[pos2].math,
												student[pos2].english);
}
