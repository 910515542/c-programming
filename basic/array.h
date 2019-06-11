#ifndef __ARRAY_H__
#define __ARRAY_H__

#include<stdlib.h>
#include<stdio.h>

#define block 20

typedef struct {
	int *array;
	int size;
} Array;

Array array_creat(int init_size);//提供数组 
void array_free(Array *a);//释放malloc内存 
int array_size(const Array *a);//得到目前数组大小 
int* array_at(Array *a, int index)//访问所得数组单元 
void array_inflate(Array *a, int more_size);//数组空间变化 

#endif
