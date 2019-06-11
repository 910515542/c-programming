#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct _arr {
	char zimu;
	int count;
} arr[26];

int cmp(const void *a, const void *b);

int main()
{
	int i = 0, j = 0, len;
	char str[1005], c;
	while((c = getchar()) != '\n')
	{
		str[i++] = c;
	}
	str[i] = '\0';
	len = strlen(str);
	for(i = 0; i < 26; i++)
	{
		arr[i].zimu = 'a' + i;
		arr[i].count = 0;
	}
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < 26; j++)
		{
			if(str[i] == arr[j].zimu || (str[i] >= 'A' && str[i] <= 'Z' && str[i] + 32 == arr[j].zimu))
			{
				arr[j].count++;
			}
		}
	}
	qsort(arr, 26, sizeof(arr[0]), cmp);
	printf("%c %d\n", arr[0].zimu, arr[0].count);
	return 0;
}

int cmp(const void *a, const void *b)
{
	struct _arr *aa = (struct _arr*)a;
	struct _arr *bb = (struct _arr*)b;
	if(aa->count < bb->count) return 1;
	if(aa->count > bb->count) return -1;
	if(aa->zimu < bb->zimu) return -1;
	if(aa->zimu > bb->zimu) return 1;
	else return 0;
}
