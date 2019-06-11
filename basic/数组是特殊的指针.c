#include<stdio.h>
int main()
{int a[10];
int i;
int*b=&i;
for(i=0;i<10;i++){
a[i]=0;}
*a=25;
printf("a=%p\n",a);
printf("b=%p",b);
printf("a[0]=%d\n",a[0]);
return 0;
}
