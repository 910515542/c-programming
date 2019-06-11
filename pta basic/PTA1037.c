#include<stdio.h>

int flag(int a, int b, int c, int d, int e, int f);
void swap(int *a, int *b);

int main()
{
	int GalleonP, SickleP, KnutP, GalleonA, SickleA, KnutA;//17£¬29 
	int GalleonG = 0, SickleG = 0, KnutG = 0, money = 0;//ÕÒ»ØµÄÇ® 
	int symbol = 0, symbol2;
	scanf("%d.%d.%d %d.%d.%d", &GalleonP, &SickleP, &KnutP, &GalleonA, &SickleA, &KnutA);
//	printf("%d %d %d %d %d %d\n", GallenP, SickleP, KnutP, GallenA, SickleA, KnutA);
//	printf("%d\n", flag(GalleonA, SickleA, KnutA, GalleonP, SickleP, KnutP));
	symbol2 = flag(GalleonA, SickleA, KnutA, GalleonP, SickleP, KnutP);
	if(symbol2 == -1)
	{
		swap(&GalleonP, &GalleonA);
		swap(&SickleP, &SickleA);
		swap(&KnutP, &KnutA);
	}
	
	if(KnutA >= KnutP)
	{
		KnutG = KnutA - KnutP;
	}
	else
	{
		KnutG = KnutA + 29 - KnutP;
		symbol = -1;
	}
	if(SickleA > SickleP)
	{
		SickleG = SickleA - SickleP + symbol;
		symbol = 0;
	}
	else
	{
		if(SickleA == SickleP)
		{
			if(symbol == -1)
			{
				SickleG = SickleA - SickleP + symbol + 17;
			}
			else
			{
				SickleG = SickleA - SickleP + symbol;
			} 
		}
		else
		{ 
			SickleG = SickleA - SickleP + symbol + 17;
			symbol = -1; 
		} 
	}
	GalleonG = GalleonA - GalleonP + symbol;
//	printf("%d %d\n", SumKnutP, SumKnutA);
//	printf("money = %d\n", money);
//	printf("%d\n", (3 * 17 + 2) * 29 + 1);
	if(symbol2 == -1)
	{
		printf("-%d.%d.%d\n", GalleonG, SickleG, KnutG);
	}
	else
	{
		printf("%d.%d.%d\n", GalleonG, SickleG, KnutG);
	}
	return 0;
}

int flag(int a, int b, int c, int d, int e, int f)
{
	if(a > d) return 1;
	if(a < d) return -1;
	if(b > e) return 1;
	if(b < e) return -1;
	if(c >= f) return 1;
	else return -1;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
