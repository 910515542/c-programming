#ifndef __node__
#define __node__

#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
} Node;

typedef struct _list {
	Node *head;
	Node *tail;
} List;

void print(List list);
void node(List *pList, int number);
void _remove_(List *plist, int num);
void _free_(List list);

#endif


