#include<stdio.h>
//老子成功了! 
//老子又成功了
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 1;
	int sum = 0,i = 0;
	//printf("请输入错误的十进制数：");
	scanf("%d", &num1);
	num2 = num1;
	for (i = 0; num2 != 0; i++)
	{
		num3 = num2 % 16;
		//printf("余数num3 = %d\n", num3);
		num2 = num2 / 16;
		//printf("除后num2 = %d\n", num2);
		sum = sum + num4 * num3;
		//printf("sum = %d\n", sum);
		num4 *= 10;
	}
	printf("%d", sum);
	return 0;
}
