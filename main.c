/*
 * main.c
 *
 *  Created on: Jun 23, 2014
 *      Author: vuclip123
 */

#include "hello.h"


	// http://wenku.baidu.com/link?url=ov8urRghPI8zjvUF1iH9518qKpTU1sxGJLNabZrwjcJnMjdvEo8P8QG2BZqnogOhoNDgbF9sL3SIJpzHRv0ZvOXq9ZYmP3EdUvcKKjWIIeu

	int main() {
		//say_hello();
		/*int i = 0;
		for(int i = 0;i < 40;i++)
			printf("%d", Fbi(i));
		return 0;*/
	}

	int Fbi(int i)
	{
		if (i<2)
			return i==0?0:1;
		return Fbi(i-1) + Fbi(i-2);
	}

/*typedef int SElemType;
typedef struct
{
	SElemType data[MAXSIZE];
	int top;
}SqStack;

 插入元素e为新的栈顶元素
Status Push(SqStack *S, SElemType e)
{
	if (S-> top == MAXSIZE-1)	//栈满
	{
		return ERROR;
	}
	S->top++;					//栈顶指针增加一
	S->data[S->top]=e;			//将新插入元素赋值给栈顶空间
	return OK;
}

 若栈不空，则删除S的栈定元素，用e返回其值，并返回OK，否则返回ERROR
Status Pop(SqStack *S, SElemType *e)
{
	if (S->top==-1)
		return ERROR;
	*e=S->data[S->top];			// 将要删除的栈顶元素赋值给e
	s->top--;					// 栈顶指针减一
	return OK;
}

//====================================
typedef struct
{
	SElemType data[MAXSIZE];
	int top1;
	int top2;
}SqDoubleStack;

 插入元素e为新的栈顶元素
Status Push(SqDoubleStack *S, SElemType e, int stackNumber)
{
	if (S->top1+1==S->top2)		// 栈已满，不能再push新元素了
		return ERROR;
	if (stackNumber == 1)		// 栈1有元素进展
		S->data[++S->top1]=e;	//若栈1 则先top1+1后给数组元素
	else if (stackNumber ==2)	// 栈2 有元素进展
		s->data[--s->top2]=e;	//若栈2 则先top2-1后给数组元素
	return OK;

}*/



