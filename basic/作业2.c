#include<stdio.h>
int prog1_1()
{
	const int ok=1;
	int uar1=-1;
	short int uar2=65535;
	long int uar3=98300;
	unsigned int uar4=98;
	float uar5=36.538723;
	double uar6=127.753405213;
	char uar7=65;
	int k;
	float x=3.6f;
	printf("[k=x]=%d [x]=%f [k]=% d\n",k=x,x,k);
	printf("[k=x]=%d [x]=%0.1f [k]=%d\n",k=x,x,k);
	printf("uar=%d\n",uar1);
	printf("uar=%d\n",uar2);
	printf("uar=%d\n",uar3);
	printf("uar=%d\n",uar4);
	printf("uar=%f\n",uar5);
	printf("uar=%lf\n",uar6);
	printf("uar=%c\n",uar7);
	return ok;
}

int prog2_1()
{
	const int ok=1;
	char a;
	int b;
	float c;
	printf("please input a number:\n");
	scanf("%c",&a);
	printf("a的值是：%c\n",a);
	printf("a占内存%d字节\n",sizeof(a));
	printf("a的起始地址是：%p\n",&a);
	printf("please input a number:\n");
	scanf("%d",&b);
	printf("b的值是：%d\n",b);
	printf("b占内存%d字节\n",sizeof(b));
	printf("b的起始地址是：%p\n",&b);
	printf("please input a number:");
	scanf("%f",&c);
	printf("c的值是：%f\n",c);
	printf("c占内存%d字节\n",sizeof(c));
	printf("c的起始地址是：%p\n",&c);
	return ok;
}

int prog3_1()
{	int a=12;
	printf("%f\n",2.5+7%3*(int)(2.5+4.7)%2/4);
	printf("%d\n",a+=a);
	return 0;
}


int main()
{
	//prog1_1();
	//prog2_1();
	prog3_1();
	return 0;
}

