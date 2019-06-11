#include<stdio.h>
#include<math.h>

int judge(int num);//判断num是否为素数 

int main()
{
	int student[10005] = {0}, i, j, N, K, temp;//以数组下标为id按排名读入 
	int count[10005] = {0}, id[10005];//checkidarr储存id，checkid以id为下标储存id信息 （出现的次数） 
	scanf("%d", &N);
	for(i = 1; i <= N; i++)//以数组下标为id按排名读入 
	{
		scanf("%d", &temp);
		student[temp] = i;
	}
	scanf("%d", &K);
	for(i = 0; i < K; i++)
	{
		scanf("%d", &id[i]);
	}
	for(i = 0; i < K; i++)
	{
		if(student[id[i]] == 0)//不存在的id排名为初始化时值0 
		{
			printf("%04d: Are you kidding?\n", id[i]);
		}
		else
		{
			count[id[i]]++;//查找一次，对该id的查找次数+1. 
			if(count[id[i]] > 1)//重复输入的id 
			{
				printf("%04d: Checked\n", id[i]);
			}
			else
			{
				if(student[id[i]] == 1)//排名为第一的id 
				{
					printf("%04d: Mystery Award\n", id[i]);
				}
				else
				{
				//	printf("%d %d\n", student[id[i]], judge(student[id[i]]));
					if(judge(student[id[i]]))//排名为素数的id 
					{
						printf("%04d: Minion\n", id[i]);
					}
					else//其它存在排名的id 
					{
						printf("%04d: Chocolate\n", id[i]);
					}
				}
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
