/*
 * test.h
 *
 *  Created on: Nov 27, 2014
 *      Author: vuclip123
 */

#ifndef TEST_H_
#define TEST_H_
#include <stdio.h>
#include <stdlib.h>

struct test_st
{
	int count;
	char name[10];
};


typedef struct test_st test_t;

void test();

#endif /* TEST_H_ */
