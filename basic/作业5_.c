#include<stdio.h>
#include<math.h>
//判断闰年函数 
void Feb_days()
 {
 	int year,days;
 	printf("请输入年份："); 
 	scanf("%d",&year);
 	if((year%4==0&&year%100!=0)||year%400==0)
 	{
 		days=29;
	 }
	 else
	 {
	 	days=28;
	 }
	printf("今年2月份天数为：%d\n",days);
  } 
//计算分段函数 
int func()
{
	double x=0;
	printf("请输入自变量值x=");
	scanf("%lf",&x);
	if(x>0)
	{
		printf("函数值y=%f\n",exp(-x));
	 } else
	 {
	 	if(x==0)
	 	{
	 		int y=1;
	 		printf("函数值y=%d\n",y);
		 }else
		 {
		 	printf("函数值y=%f\n",-exp(-x));
		 }
		}
		return 0;
}
// 简单计算器函数 
void caculator()
{
	double x=0;
	double y=0;
	char a;
	printf("请输入运算数：");
	scanf("%lf",&x);	
	fflush(stdin); 
	printf("请输入运算符号：\n"); 
	a=getchar();
	printf("请输入运算数：\n");
	scanf("%lf",&y);
	if(a=='/'&&y==0)
	{
		printf("输入错误!0不能作除数。");
	}else
	{
	 switch(a)
	{
		case '+': printf("%f+%f=%f\n",x,y,x+y);break;
		case '-': printf("%f-%f=%f\n",x,y,x-y);break;
		case '*': printf("%f*%f=%f\n",x,y,x*y);break;
		case '/': printf("%f/%f=%f\n",x,y,x/y);break;
		default:printf("输入有误，请重新输入！"); 
	}
	 }
      }
//税款计算函数 
void Tax()
{
	double bonus,rate;
  	printf("请输入奖金："); 
  	scanf("%lf",&bonus);
  	if(bonus<5000)
  	{
		switch((int)(bonus/500))
	{
		case 0:rate=0;break;
		case 1:rate=0.05;break;
		case 2:case 3:rate=0.08;break;
		case 4:case 5:case 6:case 7:case 8:case 9:rate=0.10;break;
	}
	}else
	{
		rate=0.15;
	}
	printf("bonus=%f	rate=%f	tax=%f	profit=%f\n",bonus,rate,bonus*rate,bonus-bonus*rate); 
}
//算术练习函数 
int MathLearn()
{
	int a,b,i,c;
	int d=0;
	int answer=0;
	do 
	{
		srand(time(0));
		a=rand()%11;
		b=rand()%11;
		c=rand()%4;
		if(c==1&&a-b<0)
		{
			printf("\n此题减法运算答案为负数，请重新运行程序生成题目！\n");	
		}else
		{if(c==3&&a%b!=0)
		{
			printf("\n此题除法运算结果不为整，请重新运行程序生成题目！\n");
		}else
		{
			switch(c)
		{
			case 0:d=a+b;printf("\n太幸运了你!这只是一道简单的加法题:%d+%d=",a,b);break;
			case 1:d=a-b;printf("\n太幸运了你!这只是一道简单的减法题%d-%d=",a,b);break;
			case 2:d=a*b;printf("\n加油！这道乘法题也不是很难哦:%d*%d=",a,b);break;
			case 3:d=a/b;printf("\n我猜这道除法题也难不倒你哦:%d/%d=",a,b);break; 
			}
			scanf("%d",&answer);
			if(answer==d)
			{
				printf("\nRight!(你果然是最棒的！)\n");
			}else
			{
				printf("\nNot Correct!Try again!(题简单也不要粗心哦！)\n");
			}
				}
					}
					printf("输入1继续答题,输入0结束答题:");
					scanf("%d",&i); 
						}
	while(i);
	
	return 0;
}
int menu()
{
	int iselect;
	printf("\n************************\n");
	printf("\n请输入你所需函数指定序号：");
	printf("\n 1:运行函数：判断闰年函数"); 
	printf("\n 2:运行函数：计算分段函数"); 
	printf("\n 3:运行函数：简单计算器函数"); 
	printf("\n 4:运行函数：税款计算函数"); 
	printf("\n 5:运行函数：算术练习函数 "); 
	printf("\n 0:退出！"); 
	printf("\n************************\n");
	printf("请输入您的选项：");
	scanf("%d",&iselect);
	return iselect; 
}
