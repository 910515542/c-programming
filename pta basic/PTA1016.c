#include<stdio.h>
#include<math.h>

int main()
{
	char A[20] = {'\0'}, B[20] = {'\0'};
	char Da, Db;
	int i = 0, countA = 0, countB = 0, numA = 0, numB = 0;
	int sumA = 0, sumB = 0;
	
	scanf("%s %c %s %c", A, &Da, B, &Db);
	for(i = 0; A[i] != '\0'; i++)
	{
		if(A[i] == Da)
		{
			countA++;
		}
	}
	for(i = 0; B[i] != '\0'; i++)
	{
		if(B[i] == Db)
		{
			countB++;
		}
	}
	numA = (int)(Da - '0');
	numB = (int)(Db - '0');
	for(i = countA - 1; i >=0; i--)
	{
		sumA += numA * (int)pow(10, i);
	}
	for(i = countB - 1; i >=0; i--)
	{
		sumB += numB * (int)pow(10, i);
	}
	printf("%d\n", sumA + sumB);
	return 0;
}
