#include<stdio.h>
#include<stdlib.h>

int main(void)
{ 
	FILE *fp;	
	int i, j;

	/*********Found************/
	if ((fp=fopen("d:\\bi.dat", "wb+")) == NULL)
	{
		exit (1);
	}

	printf("input 5 numbers:");
	for (i=0; i<5; i++)
	{
		scanf("%d", &j );
		/*********Found************/
		fwrite(&j, sizeof(int), 1, fp);
	}

	rewind(fp);
	for(i=0; i<5; i++)
	{ 
		j = getw(fp);
		printf("%d\t", j);
	}
	fclose(fp);

	return 0;
}
