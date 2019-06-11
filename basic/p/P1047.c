#include<stdio.h>
#include<string.h>

struct {
	char name[21];
	char guige[11];
	double price;
	int number;
} arr[4];

int main()
{
	FILE *fp;
	char temp[21];
	int flag2 = 0, flag3 = 0, i = 0, flag[10] = {0};
	
	if((fp = fopen("sp.txt", "r+")) == NULL)
	{
		printf("´ò¿ªÊ§°Ü\n");
	}
	else
	{
		//fread(arr, sizeof(arr[0]), 4, fp);
		while(!feof(fp))
		{
			fscanf(fp, "%s %s %lf %d", arr[i].name, arr[i].guige, &arr[i].price, &arr[i].number);
			i++;
		}
		for(i = 0; i < 4; i++)
		{
			printf("%s,%s,%d,%.2f\n", arr[i].name, arr[i].guige, arr[i].number, arr[i].price);
		}
		printf("Please input shang pin pin ming:");
		scanf("%s", temp);
		printf("\ncha zhao qing kuang:\n");
		for(i = 0; i < 4; i++)
		{
			flag2 = strcmp(temp, arr[i].name);
			if(flag2 == 0)
			{
				flag[i] = 1;
				flag3 = 1;
			}
		}
		if(flag3 == 0)
		{
			printf("mei you shang pin :%s\n", temp);
		}
		else
		{
			for(i = 0; i < 4; i++)
			{
				if(flag[i] == 1)
				{
					printf("%s,%s,%d,%.2lf\n", arr[i].name, arr[i].guige, arr[i].number, arr[i].price);
				}
			}
		}
	}
	return 0;
}
