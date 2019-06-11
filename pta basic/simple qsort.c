#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
char s[100][100]; 
int i,n;
int cmp(const void *a,const void *b) 
{ 
     return(strcmp((char*)a,(char*)b)); 
}
int main() 
{ 
     scanf("%d",&n); 
     for(i=0;i<n;i++)
        scanf("%s",s[i]);
     qsort(s,n,sizeof(s[0]),cmp);  
     for(i=0;i<n;i++)
        printf("%s\n",s[i]); 
     printf("\n");
     return 0; 
}
