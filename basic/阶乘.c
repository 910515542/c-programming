#include<stdio.h>
int main()
{int n;
scanf("%d",&n);
int fact=1;

int i=2;
for(i=2;i<=n;i++){fact*=i;
}
printf("%d!µÈÓÚ%d\n",n,fact);
return 0;
 } 
