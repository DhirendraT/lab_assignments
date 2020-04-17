/*
 * square.h
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#ifndef SQUARE_H_
#define SQUARE_H_
#include "shape.h"
#include <iostream>
using namespace std;
class square:public shape
{
	float side;
public:
	square();
	square(float);
	~square();
	void accept();
	void display();
	float cal_peri();
	float cal_area();

	float getside() const {
		return side;
	}

	void setside(float side) {
		this->side = side;
	}
};

#endif /* SQUARE_H_ */
