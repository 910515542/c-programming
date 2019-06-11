/********************************
my faults:看题不仔细，以为库存和总售价，平均价格都是正整数，导致定义变量出错 
************************************/
#include<stdio.h>
#include<stdlib.h>

struct _kind {
	double sum;//库存 
	double sumprice;//总售价
	double oneprice; //平均价格 
} kind[1005];//存放月饼种类，

int cmp(const void *a, const void *b)
{
	struct _kind *aa = (struct _kind *)a;
	struct _kind *bb = (struct _kind *)b;
	return ((aa->oneprice) < (bb->oneprice)?1:-1);
}

int main()
{
	int i, j, N, need;//N.need种类与市场需求数
	double totalprice = 0;//最大收益  
//	double oneprice[1000] = {0};//存放月饼单价 
//	struct _kind temp;
	
	scanf("%d %d", &N, &need);
	//依次输入N种月饼库存 
	for(i = 0; i < N; i++)
	{
		scanf("%lf", &(kind[i].sum));
	}
	//依次输入N种月饼总销售额 
	for(i = 0; i < N; i++)
	{
		scanf("%lf", &(kind[i].sumprice));
	}
	//将每种月饼的平均值按输入顺序存进oneprice数组中 
	for(i = 0; i < N; i++)
	{
		kind[i].oneprice = (kind[i].sumprice) * 1.0 / (kind[i].sum);
	}
 	//排序前结构数组数据输出 
/*	for(i = 0; i < N; i++)
	{
		printf("%d %d\n", kind[i].sumprice, kind[i].sum);
	}
	printf("\n\n");
	//按照月饼平均值对结构体排序
	for(i = 1; i < N; i++)
	{
		for(j = 0; j < N - i; j++)
		{
			if( oneprice[j] < oneprice[j + 1] );
			{
				temp = kind[j];
				kind[j] = kind[j + 1];
				kind[j + 1] = temp;
			}
		}
	}
	qsort(kind, N, sizeof(kind[0]), cmp);
	//排序后结构数组输出 
	for(i = 0; i < N; i++)
	{
		printf("%d %d\n", kind[i].sumprice, kind[i].sum);
	}
	printf("\n\n");*/
	qsort(kind, N, sizeof(kind[0]), cmp);
	//根据市场需求need计算最大收益 
	i = 0;
	while( i < N )
	{
		if( need >= (kind[i].sum) )
		{
			totalprice += (kind[i].sumprice);
		}
		else
		{
			totalprice = totalprice + need * kind[i].oneprice;
			break;
		}
		need -= (kind[i].sum);
		i++;
	}
	printf("%.2f\n", totalprice);
	return 0;
}
