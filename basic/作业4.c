#include<stdio.h>
#include<math.h>//pow函数头文件 
#include<stdlib.h>//rand函数头文件 
int Area(int a,int b, int c);
int rand();
int main()
{	int a,b,c;
	printf("请分别输入三角形三边边长：\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("三角形面积为：%d\n",Area(a,b,c)); 
	mathlearn();//调用函数 
	return 0;
}
int Area(int a,int b, int c)
{
	int s,p;
	p=(a+b+c)/2;
	s=pow(p*(p-a)*(p-b)*(p-c),0.5);
	return s;
}

int mathlearn()
{
	//srand(time(0));
	int a;	 
	//int number1 = rand()%101;
	//int number2 = rand()%101;
	int number3 = rand()%101;
	int number4 = rand()%101;
	printf("\n%d+%d= \n",number3,number4);
	scanf("%d",&a);
	return 0;
}


 
	
