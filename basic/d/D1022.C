#include<stdio.h>

/*********Found************/
float add(float x, float y);

int main(void)
{
	float a, b;

	scanf("%f%f", &a, &b);
	/*********Found************/
	printf("sum=%f\n", add(a, b));

	return 0;
}

/*********Found************/
float add(float x, float y)
{
	return x + y;
}
