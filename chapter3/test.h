/*
 * test.h
 *
 *  Created on: Nov 27, 2014
 *      Author: vuclip123
 */

#ifndef TEST_H_
#define TEST_H_


#define MAXSIZE 20
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int length;
};



typedef struct Node
{
	ElemType data;
	struct Node *next;
} Node;
typedef struct Node *LinkList;


typedef struct SqList
{
	struct ElemType *e;
	int length;
} SqList;



#endif /* TEST_H_ */
