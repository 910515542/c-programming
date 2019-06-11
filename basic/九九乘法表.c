
#include<stdio.h>
int f(){
		int i = 0;
	int j = 0; 
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++);
		{
			printf("\t%d*%d =%d", i , j , i*j);
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{f();

	return 0;
}

