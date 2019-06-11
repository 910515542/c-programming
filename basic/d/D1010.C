#include<stdio.h>

int main(void)
{
	char c;
	int k1 = 0, k2 = 0, k3 = 0;

	/*********Found************/
	while ((c = getchar()) != '\n')
	{
		switch (c)
		{
			/*********Found************/
			case 'A':
				k1++;
				break;
			case 'B':
				k2++;
				break;
			case 'C':
				k3++;
				break;
			default :
				;
		}
	}
	printf("A=%d,B=%d,C=%d\n", k1, k2, k3);

	return 0;
}
