/*******************
my faults:double型数剧规定小数点位数输出时自动四舍五入 
***************/
#include<stdio.h>
#include<math.h>

struct {
	int rnum;//实部
	int vnum;//虚部 
} arr[10005];

int main()
{
	int N, i, temp;
	double maxlen = 0, len;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i].rnum, &arr[i].vnum);
		len = sqrt(arr[i].rnum * arr[i].rnum + arr[i].vnum * arr[i].vnum);
		if(maxlen < len)
		{
			maxlen = len;
		}
	}
	printf("%.2f\n", maxlen);
	return 0;
}
