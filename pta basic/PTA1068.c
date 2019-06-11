#include<stdio.h>

int dir[8][2] = {1,0, -1,0, 0,1, 0,-1, 1,1, 1,-1, -1,1, -1,-1};
int count[400000000] = {0}, m, n, tol, arr[1001][1001];

int flag(int a, int b);
int check(int x, int y);

int main()
{
	int i, j, cnt = 0, x, y;
	
	scanf("%d %d", &m, &n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
			count[arr[i][j]]++;
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(check(i, j) && count[arr[i][j]] == 1)
			{
				cnt++;
				x = i;
				y = j;
			}
		}
	}
	if(cnt==1)
	{
		printf("(%d, %d): %d\n",y+1, x+1, arr[x][y]);
	}
	else if(cnt>1)
	{
		puts("Not Unique");
	}
	else
	{
		puts("Not Exist");
	}
	return 0;
}

int flag(int a, int b)
{
	if(a >= b)
	return a - b;
	else
	return b - a;
}

int check(int x, int y)
{
	int xx, yy, i;
	for(i = 0; i < 8; i++)
	{
		xx = x + dir[i][0];
		yy = y + dir[i][1];
		if(xx >= 0 && xx < n && yy >= 0 && yy < m && flag(arr[xx][yy], arr[x][y]) <= tol)
		return 0;
	}
	return 1;
}
