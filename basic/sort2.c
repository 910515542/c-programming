#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void StringBubbleSort(char *MyStrings[], int iCount,int iSortType)
{
  	int i,j, flag; 
  	char  **pp, *temp = NULL;
  	pp = MyStrings;
  	for(i = 2; i < iCount + 2; i++)
  	{
  		printf("%s\n", pp[i]);
	}
	printf("\n");
  	for(i = 1; i < iCount; i++)
 	{
	   	for(j = 2; j < iCount + 2 - i; j++)      
	   	{
	   		flag = strcmp(pp[j], pp[j + 1]);
	    	if(iSortType) //从小到大排序 
	    	{ 
	     		if(flag > 0) 
	     		{ 
	      			temp = pp[j]; 
	      			pp[j] = pp[j+1];  
	     			pp[j+1] = temp; 
	    		} 
	    	} 
	    	else //从大到小排序 
	    	{ 
	    		 if(flag < 0) 
	     		{  
	     			temp = pp[j]; 
	      			pp[j] = pp[j+1]; 
	      			pp[j+1] = temp; 
	     		} 
	    	} 
	   }
	}
}

int main(int argc, char *argv[])
{ 
	int i,iSortType; 
	if (argc < 4)
	{  //至少有两个待排序字符串 
		printf("Parameters are not enough. Order Format:\n"); 
		printf("sort type string1 string2 string...\n"); 
		return 0; 
	} 
	iSortType = atoi(argv[1]);    //第1个参数 排序方式 
	StringBubbleSort(argv, argc - 2,iSortType);  //排序处理 
	for (i=2; i<argc; i++)//显示排序结果
	{
   		printf("%s\n", argv[i]);
   	}
	return 1;
}
