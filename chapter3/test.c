


// 3.6.2 线性表的链式存储结构
	// 对于数据元素ai，除了存储其本身信息外，还需要存储一个指示其直接后继的信息，我们把存储数据元素信息的域
	// 称为数据域，把存储直接后继位置的域称为指针域，指针域中存储的信息称为指针活链
	// 这两部分信息组成数据元素ai的存储映像，称为节点。n个结点练成一个链表，即为线性表的链式存储结构
	// 链表中的每个结点只包含一个指针域，所有叫做单链表
	// 第一个结点的存储位置叫做头指针，最后一个结点的存储位置为 NULL或 ^
	// 有时候为了方便，会在单链表的第一个结点前附设一个结点，称为头结点，头结点的数据域可以不存储任何信息

typedef struct Node
{
	ElemType data;
	struct Node *next;
} Node;
typedef struct Node *LinkList;



void union(List *La, List *Lb)
		{
	int La_len,Lb_len,i;
	ElemType e;
	La_len = ListLength(La);
	Lb_len = ListLength(Lb);
	for (i=1;i<=Lb;i++)
	{
		GetElem(Lb, i, e);
		if (!LocateElem(La, e, equal))
			ListInsert(La, ++La_len, e);
	}
		}

#define MAXSIZE 20
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int length;
};

// 顺序存储结构
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
Status GetElem(SqList L, int i, ElemType *e)
{
	if (L.length ==0 || i<1 || i>L.length)
		return ERROR;
	*e = L.data[i-1];
	return OK;
}


Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;
	if (L->length=MAXSIZE)
		return ERROR;
	if (i<1 || i>L->length+1)
		return ERROR;
	if (i<=L->length)
	{
		for (k=L->length-1;k>=i-1;k--)
			L->data[k+1] = L->data[k];
	}
	L->data[i-1]=e;
	L->length++;
	return OK;
}

//删除
Status ListDelete(SqList *L, int i, ElemType *e)
{
	int k;
	if (L->length==0)
		return ERROR;
	if (i<1 || i>L->length)
		return ERROR;
	*e=L->data[i-1];
	if (i<L->length)
	{
		for(k=i;k<L->length;k++)
			L->data[k-1]=L->data[k];
	}
	L->length--;
	return OK;
}


// 假设p是指向线性表第i个元素的指针，
// 则该结点ai的数据域 p->data来表示
// 则该结点ai的指针域 p->next来表示

// 3.7 单链表的读取
// 3.8.1 单链表的插入与删除
// 3.8.1 单链表的删除

// 3.9 单链表的整表创建
// 3.10 单链表的整表删除
// 3.11 单链表的结构与顺序存储结构优缺点
// 3.12 静态链表
// 3.13 循环链表
