/*
 * test.c
 *
 *  Created on: Jun 24, 2014
 *      Author: vuclip123
 */



// 4.9 栈的应用 四则运算表达式求值

	// 4.9.1 后缀（逆波兰）表示法定义

	// 9 + (3-1) * 3 + 10 / 2 用后缀表示法 9 3 1 - 3 * + 10 2 / +
	// 解释： 从左到右便利表达式的每个数字和符号，遇到是数字就进栈，遇到是符号
	// 就将处于栈顶两个数字出栈，进行计算，运算结果进栈

	// 4.9.2 后缀表达式计算结果

	// 4.9.3 中缀表达式转后缀表达式
	// 规则：从左到右遍历中缀表达式的每个数字和符合，若是数字就输出，即成为后缀表达式的一部分
	//		若是符号，则判断其与栈顶符号的优先级，是右括号或优先级低于栈顶符合（乘除优先加减）
	//		则栈顶元素依次出栈并输出，并将当前符号进栈，一直到最终输出后缀表达式为止

// 4.10 队列的定义 先进先出 FIFO 队尾 队头

// 4.11 队列的抽象数据类型

// 4.12 循环队列

	// 4.12.1 队列顺序存储的不足
		//front指针指向队头元素 rear指针指向队尾元素的下一个位置 front等于rear时是空队列
		// 入队rear向后移动，出队front向后移动
	// 4.12.2 循环队列定义

// 4.13 队列的链式存储结构及实现


typedef int QElemType;
typedef struct QNode
{
	QElemType data;
	struct QNode *next;
}QNode,*QueuePtr;

typedef struct
{
	QueuePtr front,reat;
}LinkQueue;

/* 初始化一个空队列 Q */
Status InitQueue(SqQueue *Q)
{
	Q->front=0;
	Q->rear=0;
	return OK;
}

/* 返回 Q 的元素个数，也就是队列的当前长度 */
int QueueLength(SqQueue Q)
{
	return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

/* 队列未满，则插入元素e为Q新的队尾元素 */
Status enQueue(LinkQueue *Q, QElemType e)
{
	QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
	if (!s)
		exit(OVERFLOW);
	s->data=e;
	s->next=NULL;
	Q->rear->next=s;
	Q->rear=s;
	return OK;
}

/* 队列不空，则删除Q中对头元素，用e返回其值 */
Status DeQueue(LinkQueue *Q, QElemType e)
{
	QueuePtr p;
	if (Q->front==Q->rear)
		return ERROR;
	p=Q->front->next;
	*e=p->data;
	Q->front->next=p->next;
	if (Q->rear==p)
		Q->rear=Q->front;
	free(p);
	return OK;
}






