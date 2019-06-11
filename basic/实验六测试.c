#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int MathLearn(); 
int main()
{
	MathLearn();
	return 0;
}
int MathLearn()
{
	int a,b,z=0,c=0,breaklab=1;
	int answer=0,answer1=0,x=0;
	int y=0;
	int d=0;
	char ch,ch2;
	int num1[10];
	int num2[10];
	int num3[10];
	char ch1[10];
	int i = 0;
	srand(time(0));
	while(z<10)
	{
		z++;
		a=rand()%11;
		b=rand()%11;
		c=rand()%4;
		if((c==3&&a%b!=0)||(c==3&&b==0))
		{
			z--;
			continue;
		}else
		{
			switch(c)
			{
				case 0:ch2='+';d=a+b;printf("%d+%d=",a,b);break;
				case 1:ch2='-';d=a-b;printf("%d-%d=",a,b);break;
				case 2:ch2='*';d=a*b;printf("%d*%d=",a,b);break;
				case 3:ch2='/';d=a/b;printf("%d/%d=",a,b);break; 
			}
			scanf("%d",&answer);
			if(answer==d)
			{
				printf("Right!\n");
			}else
			{
				printf("Not Correct\n");
				num1[i]=a;
				num2[i]=b;
				ch1[i]=ch2;
				num3[i]=d;
				i++;
				y++;	
			}
		}
		printf("第%d题:",z+1);
	}
	printf("\n做错了%d题\n",y);	
	printf("\n总分为：%d",100-y*10);
	if(y!=0)
	{
		printf("\nDo you want to correct your answer?Y/N\n");
		fflush(stdin); 
		ch=getchar();
		while(ch=='Y'||ch=='y')
		{
			for(x=0;x<10;x++)
			{
			//	printf("ch[x]=%c\n",ch1[x]);
				if(ch1[x]=='\0')
				{
				//	printf("break\n");
					breaklab=0;
					break;
				}else
				{
					do
					{
						printf("\n%d%c%d=",num1[x],ch1[x],num2[x]);
						scanf("%d",&answer1);
					}
					while(answer1!=num3[x]);
				}
			}
			if(breaklab==0)break;
		}
		printf("恭喜你！完成所有题目\n");
	}		
	return 0;
}


