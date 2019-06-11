/************************8
my faults:朕无能为力 
*******************/
#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

void input(char *str);//输入表情字符 
int getlength(char *str);//计算每个集合的符号个数，检查用户输入的序号是否存在 
void output(char *str, int num);
//储存用户输入的数字 
struct _user {
	int arr[6];
} *user;

int main()
{
	int i = 0, j = 0, lens, leny, lenk;
	char shou[800], yan[800], kou[800], ch;
	int k;
	
	input(shou);
	input(yan);
	input(kou);
//	printf("%s\n%s\n%s\n", shou, yan, kou);
//	system("pause");
	lens = getlength(shou);
	leny = getlength(yan);
	lenk = getlength(kou);
//	printf("%d %d %d\n", lens, leny, lenk);
//	lens = 6;leny = 9;lenk = 5;
	scanf("%d", &k);
	user = (struct _user*)malloc(sizeof(struct _user) * k);
	for(i = 0; i < k; i++)
	{
		user[i].arr[5] = 1;//判断用户输入序号是否存在，不存在则其值为零 
		for(j = 0; j < 5; j++)
		{
			scanf("%d", &user[i].arr[j]);
			//判断用户输入序号是否存在
			if(user[i].arr[j] < 1)
			{
				user[i].arr[5] = 0;
			}
			else
			{
				if((j == 0 || j == 4) && user[i].arr[j] > lens)
				{
					user[i].arr[5] = 0;
				}
				if((j == 1 || j == 3) && user[i].arr[j] > leny)
				{
					user[i].arr[5] = 0;
				}
				if(j == 2 && j > lenk)
				{
					user[i].arr[5] = 0;
				}
			}
		}
	}
	i = 0;
	while(i < k)
	{
		if(user[i].arr[5] == 0)
		{
			printf("Are you kidding me? @\\/@\n");
		}
		else
		{
			output(shou, user[i].arr[0]);output(yan, user[i].arr[1]);
			output(kou, user[i].arr[2]);output(yan, user[i].arr[3]);
			output(shou, user[i].arr[4]);
			printf("\n");
		}
		i++;
	 } 
	return 0;
}

void input(char *str)
{
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n')
	{
		if(ch != ' ')
		str[i++] = ch;
	}
	str[i] = '\0';
}

int getlength(char *str)
{
	int len = strlen(str), i = 0, length = 0;
	
	for(i = 0; i < len; i++)
	{
		if(str[i] == '[')
		length++;
	}
	return length;
}

void output(char *str, int num)
{
	int i, j, flag = 0, len;
	
	len = strlen(str);
	
	for(i = 0; i < len; i++)
	{
		if(str[i] == '[')
		{
			flag++;
		}
		if(flag == num)
		{
			for(j = i + 1; str[j] != ']' && j < len; j++)
			{
				printf("%c", str[j]);
			}
		}
	}
}
