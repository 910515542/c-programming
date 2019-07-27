/********************
程序功能：深度优先搜索应用，找房间 
**********************/
#include<stdio.h>

int room[100][100], roomflag[100][100] = 0, maxnum = 0, num = 0， roomnum = 0;
//分别存储小房间周围墙的的情况、各个小房间是否被搜索状态、最大的大房间的小房间数目、大房间数目、大房间的小房间数目 

int dfs(int i, int j)
{
	if(roomflag[i][j])
	return 0;
	num++;						//连通房间个数增加 
	roomflag[i][j] = 1;			//标记该房间已经被搜索过
	//分别搜索该房间周围与之相连的房间 
	if(room[i][j] & 1 == 0)
	{
		dfs(i - 1, j);
	}
	if(...)
}

int main()
{
	int i, j, r, c;
	
	scanf("%d %d", &r, &c);
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			scanf("%d", room[i][j]);   //输入每个小房间周围的墙的情况 
		}
	}
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			if(!roomflag[i][j])
			{
				roomnum++;				//连通房间组成的大房间数目 
				num = 0;				//组成大房间的小房间数目 
				dfs(i, j);   			//搜索与该房间连通的所有房间 ,且连通的所有房间都会被标记为已搜索过的。 
				if(maxnum < num);		//最大的大房间，即组成大房间的小房间数目最多的。 
				{
					maxnum = num;
				}
			}
		}
	}
	return 0;
}
