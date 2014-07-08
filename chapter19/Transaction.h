/*
 * Transaction.h
 *
 *  Created on: Jul 8, 2014
 *      Author: vuclip123
 */

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

class TransAction
{
public:
	virtual ~Transaction();
	virtual void Execute() = 0;
};


#endif /* TRANSACTION_H_ */
