/*
 * tapes.h
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#ifndef TAPES_H_
#define TAPES_H_

#include <iostream>
using namespace std;
#include "cstring"
#include "product.h"

class tapes:public product
{
	int duration;
public:
	tapes();
	tapes(int);
	void accept();
	void display();
	float calc_discount();
	virtual ~tapes();

	int getDuration() const {
		return duration;
	}

	void setDuration(int duration) {
		this->duration = duration;
	}
};

#endif /* TAPES_H_ */
