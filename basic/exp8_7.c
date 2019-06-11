#include<stdio.h>

#define ROW 4
#define COL 5

void InputMatrix(int iMatrix[ROW][COL]);
void DisplaySource(int iMatrix[][ROW], int iRow); 
void TranspositionMatrix(int (*iSMatrix)[COL],int (*iTMatrix)[ROW]); 

int main()
{
	int iSourceMatrix[ROW][COL], arr[COL][ROW] = {0};
	int (*iSMatrix)[COL] = iSourceMatrix, (*iTMatrix)[ROW] = arr;
	
	InputMatrix(iSourceMatrix);
	TranspositionMatrix(iSMatrix, iTMatrix);
	DisplaySource(arr, COL);
	return 0;
}

void InputMatrix(int iMatrix[ROW][COL])
{
	int i, j;
	
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d", &iMatrix[i][j]);
		}
	}
}

void DisplaySource(int iMatrix[][ROW], int iRow)
{
	int i, j, iCol = ROW * COL / iRow;
	
	for(i = 0; i < iRow; i++)
	{
		for(j = 0; j < iCol; j++)
		{
			printf("%d ", iMatrix[i][j]);
		}
		printf("\n");
	}
}

void TranspositionMatrix(int (*iSMatrix)[COL],int (*iTMatrix)[ROW])
{
	int i = 0, j = 0;
	//保存两个数组指针的原始值 
	int (*p1)[ROW] = iTMatrix, (*p2)[COL] = iSMatrix;
	
	for(; iSMatrix < p2 + ROW; iSMatrix++, i++)
	{
		for(j = 0, iTMatrix = p1; j < COL; j++, iTMatrix++)
		{
			(*iTMatrix)[i] = (*iSMatrix)[j];
		}
	}
}
