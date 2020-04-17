/*
 * circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#define pie 3.14
#include "shape.h"
#include <iostream>
using namespace std;
class circle:public shape
{
	float radius;
public:
	circle();
	circle(float);
	~circle();
	void accept();
	void display();
	float cal_peri();
	float cal_area();

	float getRadius() const {
		return radius;
	}

	void setRadius(float radius) {
		this->radius = radius;
	}
};

#endif /* CIRCLE_H_ */
