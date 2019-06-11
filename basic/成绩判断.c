#include<stdio.h>
int main()
{int score=0; 
printf("请输入成绩：");
scanf("%d",&score);
if(score>60){printf("恭喜你，及格了！");
}else{printf("很遗憾，你没及格，继续努力！"); 
}return 0;
}
