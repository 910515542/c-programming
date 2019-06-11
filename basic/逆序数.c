#include<stdio.h>
int main()
{int a;
int b=0;
int c=0;
scanf("%d",&a);
while(a>0){b=a%10;c=c*10+b;a/=10;printf("a=%d b=%d c=%d\n",a,b,c);
}printf("%d\n",c);
return 0;
 } 
