#include<stdio.h>

struct {
	char que;
	char answ;
} str[405];

int main()
{
	int n, i;
	
	scanf("%d", &n);
	for(i = 0; i < n * 4; i++)
	{
		getchar();
		scanf("%c-%c", &str[i].que, &str[i].answ);
	}
	for(i = 0; i < n * 4; i++)
	{
		if(str[i].answ == 'T')
		{
			printf("%d", str[i].que - 'A' + 1);
		}
	}
	printf("\n");
	return 0;
}
