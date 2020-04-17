/*
 * rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "shape.h"
#include <iostream>
using namespace std;
class rectangle:public shape
{
	float length;
	float breadth;
public:
	rectangle();
	rectangle(float,float);
	~rectangle();
	void accept();
	void display();
	float cal_peri();
	float cal_area();

	float getBreadth() const {
		return breadth;
	}

	void setBreadth(float breadth) {
		this->breadth = breadth;
	}

	float getLength() const {
		return length;
	}

	void setLength(float length) {
		this->length = length;
	}
};

#endif /* RECTANGLE_H_ */
