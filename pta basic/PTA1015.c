/*************************************
my faults:本地变量空间不够，可以定义全局，分第三类学生时少了等号 

**************************************/
/************************ 
第一类：德分和才分均不低于此线的被定义为“才德全尽。
第二类：才分不到但德分到线的一类考生属于“德胜才 
第三类：德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡
第四类：其他达到最低线 L 的考生也按总分排序
*************************/ 

#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b);

typedef struct {
	int stunum;
	char Dscore;//存储分数，当作整数类型用，节省空间 
	char Cscore;
	char sumscore;
} Student;

Student kind1[100005], kind2[100005], kind3[100005], kind4[100005];//四类学生 

int main()
{
	int N, L, H;//学生人数，及格分，优秀分 
	int i = 0, j = 0, len1, len2, len3, len4; //四类学生人数 
	Student student[100005];
	
	scanf("%d %d %d", &N, &L, &H);
	for(i = 0; i < N; i++)
	{
		scanf("%d %d %d", &student[i].stunum, &student[i].Dscore, &student[i].Cscore);
	}
	for(i = 0; i < N; i++)
	{
		student[i].sumscore = student[i].Cscore + student[i].Dscore;
	} 
	for(i = 0, j = 0; i < N; i++)
	{
		if(student[i].Dscore >= H && student[i].Cscore >= H)//第一类 
		{
			kind1[j] = student[i];
			j++;
		}
	}
	len1 = j;
	for(i = 0, j = 0; i < N; i++)
	{
		if(student[i].Dscore >= H && student[i].Cscore < H && 
		student[i].Cscore >= L && student[i].Dscore >= L)//第二类 
		{
			kind2[j] = student[i];
			j++;
		}
	}
	len2 = j;
	for(i = 0, j = 0; i < N; i++)
	{
		if(student[i].Dscore < H && student[i].Cscore < H && 
		student[i].Dscore >= student[i].Cscore && student[i].Cscore >= L && student[i].Dscore >= L)//第三类 
		{
			kind3[j] = student[i];
			j++;
		}
	}
	len3 = j;
	for(i = 0, j = 0; i < N; i++)
	{
		if(student[i].Dscore < H &&
		student[i].Dscore < student[i].Cscore && student[i].Cscore >= L && student[i].Dscore >= L)
		{
			kind4[j] = student[i];
			j++;
		}
	}
	len4 = j;
	//对四种考生分别进行排序 
	qsort(kind1, len1, sizeof(kind1[0]), cmp);
	qsort(kind2, len2, sizeof(kind2[0]), cmp);
	qsort(kind3, len3, sizeof(kind3[0]), cmp);
	qsort(kind4, len4, sizeof(kind4[0]), cmp);
	
	printf("%d\n", len1 + len2 + len3 + len4);
	for(i = 0; i < len1; i++)
	{
		printf("%08d %d %d\n", kind1[i].stunum, kind1[i].Dscore, kind1[i].Cscore);
	}
	for(i = 0; i < len2; i++)
	{
		printf("%08d %d %d\n", kind2[i].stunum, kind2[i].Dscore, kind2[i].Cscore);
	}
	for(i = 0; i < len3; i++)
	{
		printf("%08d %d %d\n", kind3[i].stunum, kind3[i].Dscore, kind3[i].Cscore);
	}
	for(i = 0; i < len4; i++)
	{
		printf("%08d %d %d\n", kind4[i].stunum, kind4[i].Dscore, kind4[i].Cscore);
	}
	return 0;
}

int cmp(const void *a, const void *b)
{
	Student *aa = (Student*)a;
	Student *bb = (Student*)b;
	if (aa->sumscore < bb->sumscore) return 1;   
	if (aa->sumscore > bb->sumscore) return -1;  
	if (aa->Dscore > bb->Dscore) return -1;    
	if (aa->Dscore < bb->Dscore) return 1;    
	if (aa->stunum > bb->stunum) return 1;
	else return -1;
}
