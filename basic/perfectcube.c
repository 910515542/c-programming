#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,m,n;
	int flag = 0;
	printf("ÇëÊäÈënµÄÖµ£º");
	scanf("%d",&n);
	for(i = 3; i < n + 1; i++)
	{
		for(j = 2; j < i; j++)
		{
			for(k = j; k < i;k++)
			{
				for(m = k; m < i; m++)
				{
					if(pow(i,3) == pow(j, 3) + pow(k, 3) +pow(m, 3))
					{
							printf("Cube(%d),Triple(%d,%d,%d)\n",i , j, k, m);
					}
				}
			}
		}
	}
	return 0;
}
