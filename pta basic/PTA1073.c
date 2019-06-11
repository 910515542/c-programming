#include<stdio.h>

//每个题的的信息 
struct {
	int number;//题编号 
	int score;
	int truenum;//正确选项个数 
	char answer[6];//正确选项
	//各个选项错的次数 
	int issuenum[5];
} question[101];

int main()
{
	int stunum, quenum, num1, num2;
	//num1:题目选项个数，num2：学生所选个数 
	int i, j, flag, count1 = 0;
	//count1:
	char ch;
	double stuscore[1001] = {0};
	
	scanf("%d %d", &stunum, &quenum);
	//输入并初始化题目信息 
	for(i = 0; i < quenum; i++)
	{
		question[i].number = i + 1;//给题编号 
		//输入题目分数、选项个数、正确选项个数 
		scanf("%d %d %d", &question[i].score, &num1, &question[i].truenum);
		//初始化题目的选项错误次数 
		for(j = 0; j < num1; j++)
		{
			question[i].issuenum[j] = 0;
		}
		//输入题目正确选项 
		for(j = 0; j < question[i].truenum; j++)
		{
			scanf("%c", question[i].answer[j]);
		}
	}
	for(i = 0; i < stunum; i++)
	{
		for(j = 0; j < quenum; j++)
		{
			flag = 1;//判断学生是否有错误选项 
			scanf("(");
			scanf("%d", &num2); 
			for(k = 0; k < num2; k++)
			{
				scanf("%c", &ch);
				for(m = 0; m < question[j].truenum; m++)
				{
					if(ch != question[j].answer[m])
					{
						//题目对应选项错误次数加一 
						question[j].issuenum[question[j].answer[m]-'a']++;
					}
					else
					{
						flag = 1;
					}
				}
				if(num2 < question[j].truenum && flag)
				{
					stuscore[i] += (question[j].score * 1.0 / 2);
				}
				if(num2 == question[j].truenum && flag)
				{
					stuscore[i] += question[j].score;
				}
			}
			scanf(")"); 
		}
	} 
	return 0;
}
