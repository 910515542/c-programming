#include<stdio.h>

int main()
{
	int i, j, N, k = 3, sum = 1, count = -1, rest = 0;
	char flag;
	scanf("%d %c", &N, &flag);
	for( i = 0, j = 3; sum <= N; i++ , j += 2)
	{
		rest = N - sum;
		sum += (j * 2);
		count += 2;
	 } 
	 for( i = 0; i < count / 2; i++ )
	 {
	 	for(j = 0; j < i; j++)
	 	{
	 		printf(" ");
		}
		for(j = 0; j < count - i * 2; j++)
		{
			printf("%c", flag);
		}
		printf("\n");
	 }
	 printf("%*c\n", i + 1, flag);
	 for(i = count / 2; i > 0; i--, k += 2)
	 {
	 	for(j = 0; j < i - 1; j++)
	 	{
	 		printf(" ");
		 }
		 for(j = 0; j < k; j++)
		 {
		 	printf("%c", flag);
		 }
		 printf("\n");
	 }
	 printf("%d\n", rest);
	return 0;
 } 
