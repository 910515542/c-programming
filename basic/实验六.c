#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int perfectnum1(int x);
void perfectnum2();
int perfectnum();
void exchange(int* a,int* b);
void ReverseArray(int IArray[],int ICount);
int SelectSort();
int location(int a[],int length);
int BubbleSort();
int mystrlen(char*p);
char*mystrcat(char*p,char*q);
int mystrcmp(char*p,char*q);
char*mystrcpy(char*p,char*q);
char*myiarray(char*p,char*q,int length);
int MathLearn();  
int menu();
int main()
{
	int i=0,j=0,n;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	char b[30]="hello word!";
	char c[20]="congratunate you!";
	n=strlen(c);
	do 
	{
		switch(menu())
		{
			case 1:perfectnum();break;
			case 2:ReverseArray(a,n);for(j=0;j<10;j++)
			{
				printf("%d ",a[j]);
			}break;
			case 3:BubbleSort();break;
			case 4:SelectSort();break;
			case 5:printf("%d",mystrlen(b));break;
			case 6:printf("%s",mystrcat(b,c));;break;
			case 7:printf("%d",mystrcmp(b,c));break;
			case 8:printf("%s",mystrcpy(b,c));break;
			case 9:printf("%s",myiarray(b,c,n));break;
			case 10:MathLearn();
			case 0:break; 
			default:printf("\n格式错误！\n");break; 
		}
		printf("\n若要继续运行函数请输入1，否则输入0：");
		scanf("%d",&i);
	}
	while(i);
	//BubbleSort();
	//SelectSort();
	//perfectnum();
	/*int a[10]={0},i=0,ICount=0;
	printf("输入数组各元素值："); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n输入需要逆序的个数：");
	scanf("%d",&ICount); 
	ReverseArray(a,ICount);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}*/
	return 0;
}
int perfectnum()
{
	int a[10]={0},*p=a,i,num=0,n=1,sum=0;
	perfectnum2();
	for(i=1;i<=1000;i++)
	{
		if(perfectnum1(i))
		{
			*p=perfectnum1(i);
			p++;	
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]!=0)
		{
			sum+=a[i];
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]!=0)
		{
			num++;
		}
		if(n)
		{
			printf("%d=%d",sum,a[i]);
			n--;		
		}else
		{
			if(a[i]!=0)
			printf("+%d",a[i]);
		}
	}
	//printf("\nnum=%d",num);
	return num;
 }
void perfectnum2()
{
	int i=1,a=2,b=0,c=1,d=1;
	for(a=2;a<=1000;a++)
	{
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				b=b+i;
			}
			
		}
		//printf("a=%d,b=%d\n",a,b);
		if(a==b)
		{
			for(d=1;d<a;d++)
			{
				if(a%d==0)
				{
					if(c)
					{
						printf("%d=%d",a,d);
						c--;
					}else
					{
						printf("+%d",d);
					}
				}
			}
			c++;
			printf("\n");
		}
		b=0;
	}
}
  
int perfectnum1(int x)
{
	int i,b=0,a=0;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			a=a+i;
			
		}
	}
	if(x==a)
	{
		b=a;
	}
	return b;
}
void ReverseArray(int IArray[],int ICount)
{
	int num1=0,num2=ICount-1,i;
	for(i=0;i<(ICount/2);i++)
	{
		exchange(&IArray[num1],&IArray[num2]);
		num1++;
		num2--;
	}
}
void exchange(int* a,int* b)
{
	int n=0;
	n=*a;
	*a=*b;
	*b=n;
}
int BubbleSort()
{
	int sum1=0,x=0;
	int i,a[10]={0},n=9,j,sum=0,b,t=0,length=10;
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i]=rand();
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	for(i=0;i<9;i++)
	{
		b=0;
		for(j=1;j<=n;j++)
		{
			if(a[j-1]>a[j])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
				sum++;
				b++;
				sum1++;
				for(x=0;x<10;x++)
				{
					printf("%d ",a[x]);
				}
				printf("\n");
			}
		}
		n--;
		if(b){
			}
		else break;
		
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return sum1;
}
int SelectSort()
{
	int a[10],i,length=10,x=0,n=0,t=0;
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i]=rand();
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	for(i=0;i<10;i++)
	{
		t=a[location(a,length)];
		a[location(a,length)]=a[length-1];
		a[length-1]=t;
		n++;
		length--;
		for(x=0;x<10;x++)
		{
			printf("%d ",a[x]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return n;
}
int location(int a[],int length)
{
	int max=a[0],i,location=0;
	for(i=0;i<length;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}	
	}
	for(i=0;i<length;i++)
	{
		if(max==a[i])
		{
			location=i;
		}	
	}
	return location;	
}
int mystrlen(char*p)
{
	int i=0;
	while(p[i]!=0)
	{
		i++;
	}
	printf("length=%d\n",i);
	return i;
}
char*mystrcat(char*p,char*q)
{
	int i=0,j=0;
	while(1)
	{
		if(p[i]==0)
		{
			p[i]=q[j];
			j++;
		}
		i++;
		if(q[j]==0)
		{
			p[i]=q[j];
			break;
		}
	}
	return p;
}
int mystrcmp(char*p,char*q)
{
	int i=0,j=0;
	while(1)
	{
		if(p[i]!=q[i])
		{
			j=p[i]-q[i];
			break;
		}
		i++;
	}
	return j;
}
char*mystrcpy(char*p,char*q)
{
	int i=0;
	while(q[i]!=0)
	{
		p[i]=q[i];
		i++;
	}
	p[i]=0;
	return p;
}
char*myiarray(char*p,char*q,int length)
{
	int n=length,i;
	for(i=0;i<(length/2);i++)
	{
		char temp='\0';
		temp=q[i];
		q[i]=q[n-1];
		q[n-1]=temp;
		n--;
	}
	for(i=0;i<length;i++)
	{
		p[i]=q[i];
	}
	p[length]=0;
	return p;
}
int menu()
{
	int iselect;
	printf("\n************************\n");
	printf("\n请输入你所需函数指定序号：");
	printf("\n 1:运行函数：完数"); 
	printf("\n 2:运行函数：逆序");
	printf("\n 3:运行函数：冒泡排序"); 
	printf("\n 4:运行函数：选择排序"); 
	printf("\n 5:运行函数：测字符串长度");
	printf("\n 6:运行函数：字符串连接"); 
	printf("\n 7:运行函数：字符串比较"); 
	printf("\n 8:运行函数：字符串复制"); 
	printf("\n 9:运行函数：字符串逆序存放");
	printf("\n 10:运行函数：小学生计算题"); 
	printf("\n 0:退出！"); 
	printf("\n************************\n");
	printf("请输入您的选项：");
	scanf("%d",&iselect);
	return iselect; 
}
int MathLearn()
{
	int a,b,z=0,c=0,breaklab=1;
	int answer=0,answer1=0,x=0;
	int y=0;
	int d=0;
	char ch,ch2;
	int num1[10]={0};
	int num2[10]={0};
	int num3[10]={0};
	char ch1[10]={'\0'};
	int num_1=0,num_2=0,num_3=0,ch_1=0;
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
				num1[num_1]=a;
				num2[num_2]=b;
				ch1[ch_1]=ch2;
				num3[num_3]=d;
				num_1++;
				num_2++;
				ch_1++;
				num_3++;
				y++;	
			}
		}
		printf("第%d题：",z+1);
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
				//printf("ch[x]=%c\n",ch1[x]);
				if(ch1[x]=='\0')
				{
					//printf("break\n");
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
		printf("\n恭喜你！完成所有题目\n");
	}		
	return 0;
}

