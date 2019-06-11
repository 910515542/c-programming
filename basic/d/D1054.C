#include <stdio.h>

int main(void)
{ 
	unsigned long int number, num1, num2, mask;
	int i;
	char str[33];
	
	printf("Please input num1 and num2 : ");
	scanf("%lu %lu", &num1, &num2);
	
	/*********Found************/
	mask = 0x80000000;
	number = num1 ^ num2;
	for(i=0; i<32; i++)
	{ 
		/*********Found************/
		str[i] = number & mask ? '1': '0';
		mask >>= 1;
	}
	str[32] = '\0';
	printf("%lu ^ %lu = %s\n", num1, num2, str);
	
	return 0;
}	
