#include<stdio.h>
#include <stdlib.h>
int main()
{
	int *a=0;
	int cnt=0;
	while(a=(int*)malloc(100*1024*1024))
	{
		cnt++;	
	}
	free(a); 
	printf("能分配的内存为:%d00M",cnt);
	return 0;
}
