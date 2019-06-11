#include<stdio.h>

int check(int num, int *arr, int len);

int main()
{
	int stunum, kindnum, i, j, kind[6], flag = 1;
	/*stunum：学生人数，kindnum：禁止携带物品总数，kind：保存禁止物品编号*/ 
	char name[6];//存放学生名字 
	int thingnum, thing, sumstu = 0, sumthing = 0, temp;
	/*thingnum：学生携带物品总数，thing：所携带物品编号，sumstu：携带禁止物品的学生总人数
	，sumthing：被携带的禁止物品总数*/ 
	scanf("%d %d", &stunum, &kindnum);
	//输入禁止物品编号 
	for(i = 0; i < kindnum; i++)
	{
		scanf("%d", &kind[i]);
	}
	for(i = 0; i < stunum; i++)
	{
		getchar();
		flag = 1;
		temp = 1;
		//输入每名学生的名字和所携带的物品总数及物品编号 
		scanf("%s %d", name, &thingnum);
		for(j = 0; j < thingnum; j++)
		{
			scanf("%d", &thing);
			//判断该编号物品是否属禁止物品 
			if(check(thing, kind, kindnum) == 0) 
			{ 
				if(temp)
				{
					sumstu++;
					temp = 0;
				}
				sumthing++;
				if(flag)
				{
					printf("%s: %04d", name, thing);
					flag = 0;
				}
				else
				{
					printf(" %04d", thing);
				}
			}
		}
		if(temp == 0) 
		printf("\n");
	}
	printf("%d %d\n", sumstu, sumthing);
	return 0;
}
int check(int num, int *arr, int len)
{
	int i, flag = 1;
	
	for(i = 0; i < len; i++)
	{
		if(num == arr[i])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
