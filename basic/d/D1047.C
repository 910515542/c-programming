#include <stdio.h>
#include <stdlib.h>

struct aa
{
	int a;
	double b;
};

/*********Found************/
void Input(struct aa *x);

int main(void)
{
	struct aa y;

	/*********Found************/
	Input(&y);
	printf("%d %f\n", y.a, y.b);
	return 0;
}

/*********Found************/
void Input(struct aa *x)
{
	char tmp[10];

	printf("请输入整型数a:");
	gets(tmp);
	x->a = atoi(tmp);
	printf("请输入单精度数b:");
	gets(tmp);
	x->b = atof(tmp);
}
