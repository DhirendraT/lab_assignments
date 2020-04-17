/*
 * books.h
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#ifndef BOOKS_H_
#define BOOKS_H_
#include "iostream"
using namespace std;
#include "cstring"
#include "product.h"

class books:public product
{
	int pages;
public:
	books();
	books(int);
	void accept();
	void display();
	float calc_discount();
	virtual ~books();

	double getPages() const
	{
		return pages;
	}

	void setPages(double price)
	{
		this->pages = pages;
	}
};

#endif /* BOOKS_H_ */
