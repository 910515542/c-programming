/**********************
my faults:无法正常输入 
**********************/
#include<stdio.h>

#define Clear {\
					int ch;\
					while((ch = getchar()) != EOF && ch != '\n')\
					{\
					;\
					}\
			   }

struct {
	int score;//该题分数 
	int sumnum;//总选项个数 
	int truenum;//正确选项个数 
	int falsenum;//记录错的次数 
	char option[5];//正确选项 
} issue[101];
struct{
	int selectnum;//选择个数
	char select[5];//选择的选项 
} student[1001][101];

int main()
{
	int stunum, issuenum, i, j, k, n, flag = 0, symbol = 1;//是否选对的标志 
	int  maxfalsecount = 0, maxfalsenumber;
	int getscore[1001] = {0};//该生得分 
	
	scanf("%d %d", &stunum, &issuenum);
	for(i = 0; i < issuenum; i++)
	{
		Clear
		issue[i].falsenum = 0;
		scanf("%d %d %d", &issue[i].score, &issue[i].sumnum, &issue[i].truenum);
		for(j = 0; j < issue[i].truenum; j++)
		{
			scanf("%c", &issue[i].option[j]);
		}
	}
//	system("pause");
	for(i = 0; i < stunum; i++)//第i个学生 
	{
		for(k = 0; k < issuenum; k++)//第k个题 
		{
			Clear
			scanf("(");
			scanf("%d", &student[i][k].selectnum);
		//	printf("student[%d][%d].selectnum = %d	",i, k, student[i][k].selectnum);
			for(j = 0; j < student[i][k].selectnum; j++)
			{
				scanf("%c", &student[i][k].select[j]);
			}
			scanf(")");
		//	printf("student[%d][%d].selectnum input OK\n", i, k, student[i][k].selectnum);
			if(student[i][k].selectnum != issue[k].truenum)
			{
				issue[k].falsenum++;
				symbol = 0;
			}
			else
			{
				//通过将考生每个选项与正确选项对比判断第i个考生第k个题是否正确 
				flag = 0;
				n = 0;
				while(n < student[i][k].selectnum)//遍历第i个学生的第k个题目的选项 
				{
					for(j = 0; j < issue[k].truenum; j++)//遍历第k个题目的正确选项 
					{
						if(student[i][k].select[n] == issue[k].option[j])//判断第i个学生第k个题的第n个选项是否正确 
						flag++;
					}
					n++;
				}
				if(flag != student[i][k].selectnum)//正确个数是否等于选择个数 
				{
					issue[k].falsenum++;
					symbol = 0;
				}
				else
				getscore[i] += issue[k].score; 
			}
		}
	}
	
	for(i = 0; i < stunum; i++)
	{
		printf("%d\n", getscore[i]);
	}
	if(symbol == 1)
	{
		printf("Too simple");
	}
	else
	{
		maxfalsecount = issue[0].falsenum;
		for(i = 0; i < issuenum; i++)
		{
			if(maxfalsecount < issue[i].falsenum)
			maxfalsecount = issue[i].falsenum;
		}
		printf("%d", maxfalsecount);
		for(i = 0; i < issuenum; i++)
		{
			if(issue[i].falsenum == maxfalsecount)
			{
				printf(" %d", i + 1);
			}
		}
	}
	printf("\n");
	return 0;
 } 
