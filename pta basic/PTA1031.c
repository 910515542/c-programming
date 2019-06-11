#include<stdio.h>

int main()
{
	char num[101][19];
	int N, i, j, k, n = 1, flag, m;
	int symbol[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}, sum = 0;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%s", &num[i]);
	}
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < 17; j++)
		{
			if(num[i][j] < '0' || num[i][j] > '9')
			{
				printf("%s\n", num[i]);
				n = 0;
				break;
			}
			
		}
		if(j == 17)
		{
			sum = 0;
			for( m = 0, k = 0; m < 17; m++, k++ )
			{
				sum += ( (int)(num[i][m] - '0') * symbol[k] );
			}
			switch(sum % 11) {
				case 0:flag = 1; break;
				case 1:flag = 0; break;
				case 2:flag = 40; break;
				case 3:flag = 9; break;
				case 4:flag = 8; break;
				case 5:flag = 7; break;
				case 6:flag = 6; break;
				case 7:flag = 5; break;
				case 8:flag = 4; break;
				case 9:flag = 3; break;
				case 10:flag = 2; break;
			}
			if((char)(flag + '0') != num[i][17])
			{
				printf("%s\n", num[i]);
				n = 0;
			}
		}
	}
	if(n)
	{
		printf("All passed\n");
	}
	return 0;
}
