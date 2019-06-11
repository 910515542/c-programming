#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*printf("Please input shang pin pin ming:")
printf("\ncha zhao qing kuang:\n")
printf("mei you shang pin :*/

struct {
	char name[18];
	char guige[12];
	long number;
	float price;
	int flag;
} arr[10];

int main()
{
	FILE  *fp;
	char name[20];
	int i, symbol = 0;
	
	for(i = 0; i < 10; i++)
	{
		arr[i].flag = 0;
	}
	i = 0;
	if((fp = fopen("sp38.dat", "rb")) == NULL)
	{
		exit(1);
	}
	printf("Please input shang pin pin ming:");
	scanf("%s", name);
	while(!feof(fp))
	{
		fread(arr[i].name, sizeof(char), 18, fp);
		fread(arr[i].guige, sizeof(char), 12, fp);
		fread(&arr[i].number, sizeof(long), 1, fp);
		fread(&arr[i].price, sizeof(float), 1, fp);
		if(strcmp(arr[i].name, name) == 0)
		{
			arr[i].flag = 1;
			symbol = 1;
		}
		i++;
	}
	printf("\ncha zhao qing kuang:\n");
	if(symbol == 0)
	{
		printf("mei you shang pin :%s\n", name);
	}
	else
	{
		for(i = 0; i < 10; i++)
		{
			if(arr[i].flag)
			{
				printf("%s,%s,%ld,%.2f\n", arr[i].name, arr[i].guige, arr[i].number, arr[i].price);
			}
		}
	}
	return 0;
}
