#include<stdio.h>
int main()
{int a[10]={[1]=2,3,4,[6]=7};
int i; 
for(i=0;i<10;i++)
{printf("%d:%d\n",i,a[i]);
}return 0;
 } 
