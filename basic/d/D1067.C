#include <stdio.h>

int main(void)
{
	/*********Found************/
	int *ptr;
	int num;
	
	/*********Found************/
	ptr =&num ;

	printf("请输入一个数：");
	scanf("%d", ptr);
	printf("用户输入的数为：%d\n", num);
	
	return 0;
}
