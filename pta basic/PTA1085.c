#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct _student {
	char id[10];
	int score;
	char school_name[10];
} student[100005];
struct _school {
	double sumscore;
	int sumscore2;
	int stucount;
	char name[10];
} school[100005];

double exchange(struct _student student)
{
	char ch = student.id[0];
	double exscore = 0;
	
	switch(ch)
	{
		case 'B': exscore = student.score / 1.50; break;
		case 'A': exscore = student.score; break;
		case 'T': exscore = student.score * 1.5; break;
	}
	return exscore;
}
int cmp(const void *a, const void *b)
{
	struct _school *aa = (struct _school*)a;
	struct _school *bb = (struct _school*)b;
	if(aa->sumscore2 < bb->sumscore2) return 1;
	if(aa->sumscore2 > bb->sumscore2) return -1;
	if(aa->stucount > bb->stucount) return 1;
	if(aa->stucount < bb->stucount) return -1;
	else return strcmp(aa->name, bb->name);
}

int main()
{
	int n, i, j, k = 0, flag, len, temp1 = 0, temp2 = -1, temp3 = 1;
	
	scanf("%d", &n);
	//初始化结构体school 
	for(i = 0; i < 100005; i++)
	{
		school[i].stucount = 0;
		school[i].sumscore2 = 0;
		school[i].sumscore = 0;
	}
	for(i = 0; i < n; i++)
	{
		getchar();
		scanf("%s %d %s", student[i].id, &student[i].score, student[i].school_name);
		len = strlen(student[i].school_name);
		for(j = 0; j < len; j++)
		{
			student[i].school_name[j] = tolower(student[i].school_name[j]);
		}
		flag = 0;
		for(j = 0; j < k; j++)
		{
			if(strcmp(student[i].school_name, school[j].name) == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
		{
			school[j].stucount++;
			school[j].sumscore += exchange(student[i]);
			school[j].sumscore2 = (int)school[j].sumscore;
		}else
		{
			strcpy(school[k].name, student[i].school_name);
			school[k].stucount++;
			school[k].sumscore += exchange(student[i]);
			school[k].sumscore2 = (int)school[k].sumscore;
			k++;
		}
	}
	qsort(school, k, sizeof(school[0]), cmp);
/*	for(i = 0; i < k; i++)
	{
		printf("%s %d %d\n", school[i].name, school[i].sumscore2, school[i].stucount);
	}*/
	printf("%d\n", k);
	for(i = 0; i < k; i++)
	{
		temp1 = school[i].sumscore2;
		if(temp1 != temp2)
		temp3 = i + 1;
		printf("%d %s %d %d\n", temp3, school[i].name, school[i].sumscore2, school[i].stucount);
		temp2 = temp1;
	}
	return 0;
}
