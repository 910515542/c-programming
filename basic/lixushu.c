#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
printf("%d",i%10*100+i%100/10*10+i/100);
return  0;}
