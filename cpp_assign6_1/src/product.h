/*
 * product.h
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include "iostream"
using namespace std;
#include "cstring"

class product
{
	char name[40];
	double price;
public:
	product();
	product(char*,double);
	virtual void accept();
	virtual void display();
	virtual float calc_discount() = 0;
	virtual ~product();

	const char* getName() const {
		return name;
	}

	double getPrice() const {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}
};

#endif /* PRODUCT_H_ */
