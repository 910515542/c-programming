#include<stdio.h>
#include <string.h>

/*********Found************/
void fun(int x, int base, char b[]);

int main(void)
{
	static char data[30];
	int i, pos, key;

	printf("Input an integer :");
	scanf("%d", &key);
	/*********Found************/
	fun(key, 8, data) ;
	pos = strlen(data);
	for (i=pos-1; i>=0; i--)
	{
		putchar(data[i]);
	}

	return 0;
}

/*********Found************/
void fun(int x, int base, char b[])
{
	int k = 0, r;

	do
	{
		r = x % base;
		if ((base==16) && (r>=10))
		{
			r -= 10;
			r += 'A';
		}
		else
		{
			r += '0';
		}

		b[k] = r;
		k = k + 1;
		x /= base ;
	} while (x);

	b[k] = '\0';
}
