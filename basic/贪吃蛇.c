#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "acllib.h"
#include <stdlib.h>
#include <time.h> //用到产生随机数
#include <dos.h>
#define CX coord.X=x
#define CY coord.Y=y
#define SCP SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord)
int i,k=0,j;
int speed=0,choice=0;
ACL_Image img; //定义一个指向img的指针
typedef struct FOOD {
	int x; //食物的横坐标;
	int y; //食物的纵坐标;
	int yes; //判断是否要出现食物;
} food; //定义食物的结构体

typedef struct SNAKE {
	int x[200];
	int y[200];
	int jieshu; //蛇的节数;
	int direction; //蛇的移动方向
	int life; //蛇的存活， 0为生存，1为死亡
} snake; //定义蛇的结构体

typedef struct SNAKE2 {
	int x[200];
	int y[200];
	int jieshu; //蛇的节数;
	int direction; //蛇的移动方向
	int life; //蛇的存活， 0为生存，1为死亡
} snake2; //定义蛇的结构体
food Food;
snake Snake;
snake2 Snake2;

void PLAY(food* p, snake* q, snake2* a) //游戏过程的函数
{
	srand(time(NULL));
	if (Food.yes!=0) { //第一次出现食物
		Food.x=rand()%780+10; //产生食物的随机x坐标
		Food.y=rand()%580+10; //产生食物的随机y坐标
		while(Food.x%10!=0) {
			Food.x++; //判断食物的x坐标是否为整数，不是就调整
		}
		while(Food.y%10!=0) {
			Food.y++; //判断食物的y坐标是否为整数，不是就调整
		}
		Food.yes=0; //产生符合的坐标后，产生食物
	}
	for (i=Snake.jieshu-1;i>0;i--) { //关键!!
		Snake.x[i]=Snake.x[i-1]; //蛇往前移动了，所以前一个坐标给到后一个坐标
		Snake.y[i]=Snake.y[i-1];
	}
	for (i=Snake2.jieshu-1;i>0;i--) { //关键!!
		Snake2.x[i]=Snake2.x[i-1]; //蛇往前移动了，所以前一个坐标给到后一个坐标
		Snake2.y[i]=Snake2.y[i-1];
	}
	switch (Snake.direction) { //判断蛇头的移动方向，1234表示右左上下
		case 1:Snake.x[0]+=10;break; //向右移动十格
		case 2:Snake.x[0]-=10;break;
		case 3:Snake.y[0]-=10;break;
		case 4:Snake.y[0]+=10;break;
	}
	switch (Snake2.direction) { //判断蛇头的移动方向，1234表示右左上下
		case 1:Snake2.x[0]+=10;break; //向右移动十格
		case 2:Snake2.x[0]-=10;break;
		case 3:Snake2.y[0]-=10;break;
		case 4:Snake2.y[0]+=10;break;
	}
	//接下来判断蛇是否出现咬到自己的情况，从蛇身的第5节开始判断，因为前4节长度都咬不到自己
	for (i=3;i<Snake.jieshu;i++) {
		if (Snake.x[i]==Snake.x[0]&&Snake.y[i]==Snake.y[0]) {
		Snake.life=1; //蛇死亡的标志
		jieshu();
		cancelTimer(0);	//换goto来跳出循环到游戏结束那里
	}
}
	for (i=3;i<Snake2.jieshu;i++) {
		if (Snake2.x[i]==Snake2.x[0]&&Snake2.y[i]==Snake2.y[0]) {
		Snake2.life=1; //蛇死亡的标志
		jieshu();
		cancelTimer(0);	//换goto来跳出循环到游戏结束那里
	}

	//再判断蛇是否出现撞墙的情况
	if (Snake.x[0]<0||Snake.x[0]>1000||Snake.y[0]<0||Snake.y[0]>800) {
		Snake.life=1;
		jieshu();
		cancelTimer(0);
	}
	if (Snake2.x[0]<0||Snake2.x[0]>1000||Snake2.y[0]<0||Snake2.y[0]>800) {
		Snake2.life=1;
		jieshu();
		cancelTimer(0);
	}

	if (Snake.x[0]==Food.x&&Snake.y[0]==Food.y) {
		setPenColor(0);
		rectangle(Food.x,Food.y,Food.x+10,Food.y+10);
		Food.yes=1; //产生新的食物
		k+=10;
		Snake.jieshu++; //蛇的身体加长一节
	}
	if (Snake2.x[0]==Food.x&&Snake2.y[0]==Food.y) {
		setPenColor(0);
		rectangle(Food.x,Food.y,Food.x+10,Food.y+10);
		Food.yes=1; //产生新的食物
		Snake2.jieshu++; //蛇的身体加长一节
	}
}

void paint(food* p, snake* q, snake2* a)
{
    beginPaint();

    setBrushColor(GREEN);
    setBrushColor(GREEN);
    rectangle(Food.x,Food.y,Food.x+10,Food.y+10); //画食物
    setBrushColor(RED);
    setPenColor(RED);
    for (i=0;i<Snake.jieshu;i++) {
    	rectangle(Snake.x[i],Snake.y[i],Snake.x[i]+10,Snake.y[i]+10);
	} //画蛇
	setPenColor(WHITE);
	setBrushColor(WHITE);
	rectangle(Snake.x[Snake.jieshu-1], Snake.y[Snake.jieshu-1], Snake.x[Snake.jieshu-1]+10, Snake.y[Snake.jieshu-1]+10);

	setBrushColor(BLUE);
	setPenColor(BLUE);
    for (i=0;i<Snake2.jieshu;i++) {
    	rectangle(Snake2.x[i],Snake2.y[i],Snake2.x[i]+10,Snake2.y[i]+10);
	} //画蛇
	setPenColor(WHITE);
	setBrushColor(WHITE);
	rectangle(Snake2.x[Snake2.jieshu-1], Snake2.y[Snake2.jieshu-1], Snake2.x[Snake2.jieshu-1]+10, Snake2.y[Snake2.jieshu-1]+10);
	endPaint();
}

void keyListener(int key, int event, snake* q, snake2* a)
{
    if(key==104&&Snake.direction!=4) {  //按键 ↑
    	Snake.direction=3;
	}
    if(key==101&&Snake.direction!=3) {  //按键 ↓
    	Snake.direction=4;
	}
	if(key==100&&Snake.direction!=1) {  //按键 ←
		Snake.direction=2;
	}
	if(key==102&&Snake.direction!=2) {  //按键 →
		Snake.direction=1;
	}
	 if(key==87&&Snake.direction!=4) {  //按键 ↑
    	Snake2.direction=3;
	}
    if(key==83&&Snake.direction!=3) {  //按键 ↓
    	Snake2.direction=4;
	}
	if(key==65&&Snake.direction!=1) {  //按键 ←
		Snake2.direction=2;
	}
	if(key==68&&Snake.direction!=2) {  //按键 →
		Snake2.direction=1;
	}
}

void timerListener(int id) //Timer定时器
{

	//StartView();
	PLAY(&Food, &Snake, &Snake2);
	paint(&Food, &Snake, &Snake2);
}

void StartView()
{
	loadImage("qianxun.jpg",&img);
	beginPaint();
	putImageScale(&img,DEFAULT,DEFAULT,1000,800);
	endPaint();
}

int jiemian(int a)
{
	system("color 7C");
	COORD coord;
    int x,y;
	y=3;
    for (x=35; x<65; x+=2) {
    	CX;CY;SCP;
    	printf("*");
	}
	y=19;
    for (x=35; x<65; x+=2) {
    	CX;CY;SCP;
    	printf("*");
	}
	x=35;
    for (y=3; y<20; y++) {
    	CX;CY;SCP;
    	printf("*");
	}
	x=65;
    for (y=3; y<20; y++) {
    	CX;CY;SCP;
    	printf("*");
	}
    x=41;
	y=5;
	CX;CY;SCP;
	printf("《贪吃蛇大作战1.0》");
	x=45;
	y=7;
    CX;CY;SCP;
    printf("开始游戏");
    x=45;
	y=9;
    CX;CY;SCP;
	printf("1：普通级");
	x=45;
	y=11;
    CX;CY;SCP;
	printf("2：勇士级");
	x=45;
	y=13;
    CX;CY;SCP;
	printf("3：王者级");
	x=45;
	y=15;
    CX;CY;SCP;
	printf("4：地狱级");
	x=45;
	y=17;
    CX;CY;SCP;
	printf("请输入：");
    scanf("%d", &choice);

    return choice;
}

void jieshu(snake* q, snake2* a)
{
	beginPaint();
	setTextColor(BLACK);
	setTextBkColor(EMPTY);
	setTextSize(40);
	if (Snake.jieshu>Snake2.jieshu) {
		paintText(200,250,"红色方胜利！");
	} else if (Snake.jieshu<Snake2.jieshu) {
		paintText(200,250,"蓝色方胜利！");
	} else if (Snake.jieshu==Snake2.jieshu) {
		paintText(200,250,"平手！");
	}
	paintText(200,300,"游戏结束");
	endPaint();
}

int Setup()
{
	initWindow("贪吃蛇双人对战版1.0", DEFAULT,DEFAULT,1000,800); //画游戏界面
	initConsole();
	jiemian(choice);
	Food.yes=1; //初始化一开始没有食物
	Snake.jieshu=20; //一开始蛇的节数
	Snake.direction=1; //一开始蛇的方向是向右
	Snake2.jieshu=20; //一开始蛇的节数
	Snake2.direction=4; //一开始蛇的方向是向下
	registerKeyboardEvent(keyListener);
	registerTimerEvent(timerListener);

	if (choice==1) {
		speed=200;
	}
	if (choice==2) {
		speed=150;
	}
	if (choice==3) {
		speed=100;
	}
	if (choice==4) {
		speed=30;
	}

	startTimer(0,speed);
}

