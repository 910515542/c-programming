#include<stdio.h>

typedef struct {
	char *name[4];
	double price[4];
} Fruit;

int main()
{
	int i, flag;
	Fruit fruit = {.name = {"apple", "pear", "orange", "grape"},
	.price = {3, 2.5, 4.1, 10.2}};
	
	for(i = 0; i < 4; i++)
	{
		printf("[%d] %s\n", i + 1, fruit.name[i]);
	}
	printf("[0] exit\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &flag);
		if(flag == 0)
		{
			break;
		}
		printf("price = %.2f\n", fruit.price[flag - 1]);
	}
	return 0;
}
