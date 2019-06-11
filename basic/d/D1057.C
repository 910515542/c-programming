#include <stdio.h>

int main(void)
{
	float numA, numB, *ptr;

	numA = 4.5;
	numB = 6.8f;
	/*********Found************/
	ptr = &numB;
	/*********Found************/
	printf("numA=%f, numB=%f\n", numA, *ptr);

	return 0;
}
