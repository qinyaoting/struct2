/*
 * Main.cpp
 *
 *  Created on: Jul 8, 2014
 *      Author: vuclip123
 */

#include "Main.h"

Main::Main() {


}

Main::~Main() {
	// TODO Auto-generated destructor stub
}

int Sequential_Search(int *a, int n, int key)
{
	int i;
	for (i=1;i<=n;i++)
	{
		if (a[i] == key)
			return i;
	}
	return 0;
}

/* 有哨兵顺序查找 */
int Sequential_Search2(int *a, int n, int key)
{
	int i;
	a[0] = key;
	i=n;
	while(a[i]!=key)
	{
		i--;
	}
	return i;
	// 代码从尾部开始查找，由于a[0]=key，也就是说，如果在a[i] 中有key则返回i值，查找成功
	// 否则一定在最终a[0] 处等于key，此时返回的是0，即说明a[1]~a[n]中没有关键字key，查找失败
	// 对于这种顺序查找算法来说，查找成功最好的情况就是地一个位置就找到了，算法时间复杂读为O(1)
	// 最坏的情况是在最后一位置才找到，时间复杂度为O(n)。我们之前推导过，关键字在任何一位置的概率是相同的
	// 所以平均查找次数为(n+1)/2，所以最终时间复杂度还是O(n)
}

// 8.4.1 折半查找
	//{0,1,16,24,35,47,59,62,73,88,99}除0下标外共10个数字，对他进行查找是否存在62这个数
int binary_Search(int *a, int n, int key)
{
	int low,high,mid;
	low = 1;
	high = n;
	while(low<=high)
	{
		mid = (low+high)/2;
		if (key<a[mid])
			high = mid-1;
		else if (key>a[mid])
			low = mid+1;
		else
			return mid;
	}
	return 0;
}



