#include<stdio.h>
int sum(int a,int b );
 int main()
{int a;
 a=sum(12,13);
printf("%d\n",a);
 return 0;
 }
 int sum(int a,int b )
{int ret;
if(a>b){ret=a;
}else{ret=b;
}return ret;
 }
 
