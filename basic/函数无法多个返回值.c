#include<stdio.h>
void a(int *b,int* c);
int main()
{int b=2;
int c=3;
a(&b,&c);
printf("b=%d\nc=%d\n",b,c);
return 0;
}

/*void a(int b,int c){
int t;
t=b;
b=c;
c=t;
}*/

void a(int*b,int*c){
int t;
t=*b;
*b=*c;
*c=t;}
