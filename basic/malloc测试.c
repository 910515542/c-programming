
#include<stdio.h>
#include<stdlib.h>
int main(){

int *p;
int i;
for(i=0;i<5;i++)
{
	p=(int*)malloc(sizeof(int));
	printf("\np[%d]=%p\n",i,p);
}
free(p);
return 0;}

/*int*p=0;
int*q=0; 
p=(int*)malloc(3*sizeof(int)); 
q=(int*)malloc(3*sizeof(int));
int j; 
for(j=0;j<3;j++)
{ 
	printf("%p\n",&p[j]);
 } 
for(j=0;j<3;j++)
{ 
	printf("%p\n",&q[j]);
 } 
int*w=0; 
w=(int*)malloc(0); 
printf("malloc(0)=%d\n",sizeof(w)); 
free(q); free(p); free(w);*
return(0); 
 }*/

