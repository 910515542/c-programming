/********************8
my faults:想要不超时，只有以数组下标为id 
***************/
#include<stdio.h>

//i'm successsful,what
struct {
	int ID;
	int ranking;//排名 
} student[10005];

int judge(int num);//判断num是否为素数（筛选法） 

int main()
{
	int N, K, i, j, flag = 1;
	int checkid[10005] = {0}, num;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &student[i].ID);
		student[i].ranking = i + 1;
	}
	scanf("%d", &K);
	for(i = 0; i < K; i++)
	{
		scanf("%d", &num);
		for(j = 0; j < i; j++)
		{
			if(num == checkid[j])
			{
				num *= -1;
				break;
			}
		}
		checkid[i] = num;
	}
	for(i = 0; i < K; i++)
	{
		if(checkid[i] <= 0)//重复的id输出结果 （被包括在其它方面里） 
		{
			for(j = 0, flag = 0; j < N; j++)
			{
				if(checkid[i] * -1 == student[j].ID)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				printf("%04d: Are you kidding?\n", -1 * checkid[i]);//不存在的id 
			}
			else//存在但重复的id 
			{
				printf("%04d: Checked\n", -1 * checkid[i]);
			}
		}
		else
		{
			if(checkid[i] == student[0].ID)//冠军id输出结果 
			{
				printf("%04d: Mystery Award\n", checkid[i]);
			}
			else
			{
				for(j = 0, flag = 0; j < N; j++)
				{
					if(checkid[i] == student[j].ID)//存在排名id
					{
						flag = 1;
						if(judge(student[j].ranking))//素数id的输出结果 
						printf("%04d: Minion\n", student[j].ID);
						else
						printf("%04d: Chocolate\n", checkid[i]);//其它存在的id输出结果 
						break;
					}
				}
				if(flag == 0)//其它不存在的id输出结果 
				printf("%04d: Are you kidding?\n", checkid[i]);
			}
		}
	 }
	return 0;
}

int judge(int num)
{
	int i, symbol, flag;
	
	symbol = (int)pow(num, 0.5);
	for(i = 2, flag = 1; i <= symbo; i++)
	{
		if(num % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
