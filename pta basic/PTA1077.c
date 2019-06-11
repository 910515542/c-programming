/******************88
my faults:答案错误 
******************/
#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
	return *((int*)a) - *((int*)b);
}

int main()
{
	int n, sumscore, i, j, k = 0, temp;
	int tescore[105] = {0}, stuscore[105][105] = {0}, len[105] = {0};
	//每组老师评分，学生评分, 每组有效学生评分数量 
	double score;
	
	scanf("%d %d", &n, &sumscore);
	//输入每组的分数 
	for(i = 0; i < n; i++)
	{
		flag = 1;
		for(j = 0, k = 0; j < n; j++)
		{
			if(j == 0)
			{
				scanf("%d", &tescore[i]);//老师评分 
			}
			else
			{
				scanf("%d", &temp);
				if(temp >= 0 && temp <= sumscore)
				{
					stuscore[i][k++] = temp;//学生评分 
				}
			}
		}
		len[i] = k; //保存该组学生有效评分数量 
	}
	//对每组学生的有效评分排序 ，从而去掉-个最大值与最小值 
	for(i = 0; i < n; i++)
	{
		qsort(&stuscore[i][0], len[i], sizeof(stuscore[0][0]), cmp);
	}
/*	for(i = 0; i < n; i++)
	{
		for(j = 0; j < len[i]; j++)
		{
			printf("%d ", stuscore[i][j]);
		}
		printf("\n");
	}
	system("pause");*/
	for(i = 0; i < n; i++)
	{
		//去掉第一个最低分与最后一个最高分 
		for(j = 1, score = 0; j < len[i] - 1; j++)
		{
			score += stuscore[i][j];
		}
		score = score / (len[i] - 2);
		score = (score + tescore[i]) * 1.0 / 2;
		printf("%.0f\n", score);//四舍五入输出该组得分 
	}
	return 0;
}
