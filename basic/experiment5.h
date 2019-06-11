#ifndef __experiment__
#define __experiment__

int menu();
void Feb_days();
int func();
void caculator();
void Tax();
int MathLearn();
void Binary(int num);
typedef struct time {
	int a;
	int b;
	char c;	
}   date;
typedef struct bite {
	unsigned int leading1 : 3;
	unsigned int leading2 : 2;
	unsigned int leading3 : 3;
	int leading4 : 24;	
}   bite_int;

#endif

